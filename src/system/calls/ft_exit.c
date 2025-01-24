/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:00:51 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/09 05:26:52 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allocators/block_allocator.h"
#include <libft.h>
#include <system/calls/call_numbers.h>

void	ft_exit(t_exit_code exit_code)
{
	destroy_block_arena();
	(void)ft_syscall(SYS_EXIT, exit_code);
	while (1)
		;
}
