/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 00:25:06 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/27 03:02:12 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	_start(void)
{
	asm volatile ("xor %rbp, %rbp\n"
		"pop %rdi\n"
		"mov %rsp, %rsi\n"
		"andq $-16, %rsp\n"
		"call _mlft_main\n");
}

int		main(int count, t_cstr *args, t_cstr *env);

void	_mlft_main(int count, t_cstr *args)
{
	t_cstr	*env;
	int		code;

	env = args + count + 1;
	code = main(count, args, env);
	ft_exit(code);
}
