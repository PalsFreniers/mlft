/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:00:51 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 15:52:20 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <system/calls/call_numbers.h>

void	ft_exit(t_exit_code exit_code)
{
	(void)ft_syscall(SYS_EXIT, exit_code);
	while (1)
		;
}
