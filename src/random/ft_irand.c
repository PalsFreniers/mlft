/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_irand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 02:47:15 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 04:11:09 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_i64	ft_irand(t_i64 a, t_i64 b)
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
		return (ft_urand(0, max - min) + min);
	return (ft_urand(min, max));
}
