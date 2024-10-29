/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:36:20 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 07:45:46 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_ptr	ft_memset(t_ptr ptr, t_size len, t_u8 val)
{
	int		i;
	t_size	mval;
	int		x;

	i = 0;
	while (i < (int)len % 8)
		((t_u8 *)ptr)[i++] = val;
	x = 0;
	mval = (-1UL / 255) * val;
	while (x < (int)len / 8)
		((t_u64 *)ptr + i)[x++] = mval;
	return (ptr);
}
