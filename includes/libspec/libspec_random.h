/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libspec_random.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 02:32:40 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 02:37:38 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSPEC_RANDOM_H
# define LIBSPEC_RANDOM_H

# include <random.h>
# include <types.h>

# define RANDOM_MULT_VALUE 6364136223846793005ULL

t_u64	ft_rand(bool gen, t_seed seed);

#endif // LIBSPEC_RANDOM_H
