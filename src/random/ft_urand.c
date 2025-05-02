/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_urand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 02:38:53 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 02:46:50 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <libspec/libspec_random.h>

t_u64	ft_urand(t_u64 a, t_u64 b)
{
	t_u64	base;
	t_u64	mod;
	t_u64	max;

	if (a == b)
		return (a);
	base = a;
	max = b;
	if (a > b)
	{
		base = b;
		max = a;
	}
	mod = max - base + 1;
	return (ft_rand(true, 0) % mod + base);
}
