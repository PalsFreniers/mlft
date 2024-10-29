/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_syscall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 07:38:16 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/28 02:45:50 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdarg.h>
#include <system/calls/call_numbers.h>
#include <system/calls/registers.h>
#include <types.h>

static void	ft_syscall_get_args(va_list args, t_u64 number,
		t_registers *sys_args)
{
	sys_args->rax = number;
	sys_args->rdi = va_arg(args, t_u64);
	sys_args->rsi = va_arg(args, t_u64);
	sys_args->rdx = va_arg(args, t_u64);
	sys_args->r10 = va_arg(args, t_u64);
	sys_args->r8 = va_arg(args, t_u64);
	sys_args->r9 = va_arg(args, t_u64);
}

static t_uptr	ft_syscall_call(t_registers *sys_args)
{
	t_uptr	ret;

	asm volatile ("mov %1, %%rax \n"
		"mov %2, %%rdi \n"
		"mov %3, %%rsi \n"
		"mov %4, %%rdx \n"
		"mov %5, %%r10 \n"
		"mov %6, %%r8  \n"
		"mov %7, %%r9  \n"
		"syscall        \n"
		"mov %%rax, %0  \n"
		: "=r"(ret)
		: "r"(sys_args->rax), "r"(sys_args->rdi),
		"r"(sys_args->rsi), "r"(sys_args->rdx),
		"r"(sys_args->r10), "r"(sys_args->r8),
		"r"(sys_args->r9)
		: "%rax", "%rdi", "%rsi", "%rdx", "%r10", "%r8", "%r9",
		"memory");
	return (ret);
}

t_uptr	ft_syscall(t_call_number number, ...)
{
	t_registers	sys_args;
	va_list		args;

	va_start(args, number);
	ft_syscall_get_args(args, number, &sys_args);
	va_end(args);
	return (ft_syscall_call(&sys_args));
}
