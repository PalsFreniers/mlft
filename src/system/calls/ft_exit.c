/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:00:51 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 02:26:58 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <system/calls/call_numbers.h>

void	destroy_block_arena(void);

void	ft_exit(t_exit_code exit_code)
{
	destroy_block_arena();
	(void)ft_syscall(SYS_EXIT, exit_code);
	while (1)
		;
}
