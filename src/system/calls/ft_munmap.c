/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_munmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:52:04 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/28 02:51:09 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <system/calls/call_numbers.h>

void	ft_munmap(t_mmap_params p)
{
	if (p.addr == NULL)
		return ((void)ft_errno(true, ERRNO_NULL_BUFFER));
	if (ft_syscall(SYS_MUNMAP, p.addr, p.len) < 0)
		return ((void)ft_errno(true, ERRNO_SYSTEM));
}
