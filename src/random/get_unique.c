/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_unique.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 04:22:49 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 04:27:39 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	dummy_unique_srand(t_any data, t_seed seed)
{
	*(t_seed *)data = seed;
}

t_random	random_get_unique(t_seed *seed)
{
	return ((t_random){
		.urand = (t_random_urand_f)ft_surand,
		.irand = (t_random_irand_f)ft_sirand,
		.srand = dummy_unique_srand,
		.data = seed,
	});
}
