/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:30:42 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 06:59:35 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static t_ptr	ft_invert_memcpy(t_ptr dest, t_ptr src, t_size len)
{
	t_isize	x;
	t_isize	i;
	t_isize	tmp;

	i = len - 1;
	tmp = len - (len % 8);
	while (i >= tmp)
	{
		((t_u8 *)dest)[i] = ((t_u8 *)src)[i];
		i--;
	}
	x = len / 8 - 1;
	while (x >= 0)
	{
		((t_u64 *)dest)[x] = ((t_u64 *)src)[x];
		x--;
	}
	return (dest);
}

t_ptr	ft_memmove(t_ptr dest, t_ptr src, t_size len)
{
	if (dest == src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, len));
	return (ft_invert_memcpy(dest, src, len));
}
