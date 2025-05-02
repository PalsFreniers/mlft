/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 04:12:06 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 04:15:34 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <libspec/libspec_random.h>

t_u64	ft_surand(t_seed *seed, t_u64 a, t_u64 b)
{
	t_u64	base;
	t_u64	mod;
	t_u64	max;

	if (seed == NULL || a == b)
		return (a);
	base = a;
	max = b;
	if (a > b)
	{
		base = b;
		max = a;
	}
	mod = max - base + 1;
	*seed = RANDOM_MULT_VALUE * *seed + 1;
	return (*seed % mod + base);
}
