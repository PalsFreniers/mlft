/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:42:49 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 08:28:37 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_ptr	ft_memcopy(t_ptr dest, t_ptr src, t_size len)
{
	int	i;
	int	x;

	i = 0;
	while (i < (int)len % 8)
	{
		((t_u8 *)dest)[i] = ((t_u8 *)src)[i];
		i++;
	}
	x = 0;
	while (x < (int)len / 8)
	{
		((t_u64 *)dest + i)[x] = ((t_u64 *)src + i)[x];
		x++;
	}
	return (dest);
}
