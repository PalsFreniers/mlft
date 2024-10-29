/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:30:42 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 08:35:12 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_ptr	ft_memmove(t_ptr dest, t_ptr src, t_size len)
{
	t_size	i;

	if (dest < src)
		return (ft_memcopy(dest, src, len));
	i = len;
	while (--i >= 0)
		((t_u8 *)dest)[i] = ((t_u8 *)src)[i];
	return (dest);
}
