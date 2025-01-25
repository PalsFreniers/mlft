/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 00:25:06 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/25 00:34:24 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	_start(void)
{
	asm volatile ("xor %ebp, %ebp\n"
		"mov (%rsp), %edi\n"
		"lea 8(%rsp), %rsi\n"
		"lea 16(%rsp,%rdi,8), %rdx\n"
		"xor %rax, %rax\n"
		"call main\n"
		"mov %rax, %rdi\n"
		"call ft_exit\n");
}
