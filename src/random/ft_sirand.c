/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sirand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 04:15:44 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 04:16:27 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_i64	ft_sirand(t_seed *seed, t_i64 a, t_i64 b)
{
	t_i64	min;
	t_i64	max;

	min = a;
	max = b;
	if (a == b)
		return (a);
	if (a > b)
	{
		min = b;
		max = a;
	}
	if (min < 0)
		return (ft_surand(seed, 0, max - min) + min);
	return (ft_surand(seed, min, max));
}
