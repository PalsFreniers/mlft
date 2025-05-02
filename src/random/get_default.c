/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_default.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 04:17:22 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 04:38:11 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	dummy_srand(t_any val __attribute__((unused)), t_seed seed)
{
	ft_srand(seed);
}

t_u64	dummy_urand(t_any val __attribute__((unused)), t_u64 a, t_u64 b)
{
	return (ft_urand(a, b));
}

t_i64	dummy_irand(t_any val __attribute__((unused)), t_i64 a, t_i64 b)
{
	return (ft_urand(a, b));
}

t_random	random_get_default(void)
{
	return ((t_random){
		.srand = dummy_srand,
		.irand = dummy_irand,
		.urand = dummy_urand,
		.data = NULL,
	});
}
