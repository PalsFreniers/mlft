/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 01:39:47 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 01:40:07 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_rand(bool gen, t_seed seed, t_u64 a, t_u64 b)
{
	static t_seed	__static_mlft_seed = 123456;

	if (!gen)
		return ((void)(__static_mlft_seed = seed));
}
