/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:53:56 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 17:51:07 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <system/calls/call_numbers.h>

t_ptr	ft_mmap(t_mmap_params p, t_map_protection prot, t_map_flags flags)
{
	t_ptr	ptr;

	ptr = (t_ptr)ft_syscall(SYS_MMAP, p.addr, p.len, prot, flags, p.fd, p.off);
	if (ptr == NULL || (t_uptr)ptr == -1UL)
		return ((void)ft_errno(false, ERRNO_SYSTEM), NULL);
	return (ptr);
}
