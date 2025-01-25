/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:42:49 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/25 00:21:36 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include <libft.h>

void	*memcpy(void *dest, const void *src, unsigned long len)
{
	return (ft_memcpy(dest, (void *)src, len));
}

t_ptr	ft_memcpy(t_ptr dest, t_ptr src, t_size len)
{
	t_size	i;
	t_size	x;

	i = 0;
	while (i < len % 8)
	{
		((t_u8 *)dest)[i] = ((t_u8 *)src)[i];
		i++;
	}
	x = 0;
	while (x < len / 8)
	{
		((t_u64 *)((t_u8 *)dest + i))[x] = ((t_u64 *)((t_u8 *)src + i))[x];
		x++;
	}
	return (dest);
}
