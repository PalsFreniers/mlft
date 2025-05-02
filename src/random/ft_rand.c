/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 01:39:47 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 01:59:38 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#define RANDOM_MULT_VALUE 6364136223846793005ULL

t_u64	ft_rand(bool gen, t_seed seed)
{
	static t_seed	__static_mlft_seed = 123456;

	if (!gen)
		return (__static_mlft_seed = seed);
	seed = RANDOM_MULT_VALUE * seed + 1;
	return (seed >> 33);
}
