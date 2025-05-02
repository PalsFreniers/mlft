/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 01:40:21 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 04:27:27 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_H
# define RANDOM_H

# include <strings.h>
# include <types.h>

typedef t_u64			t_seed;

void					ft_srand(t_seed seed);
t_u64					ft_urand(t_u64 a, t_u64 b);
t_i64					ft_irand(t_i64 a, t_i64 b);
t_u64					ft_surand(t_seed *seed, t_u64 a, t_u64 b);
t_i64					ft_sirand(t_seed *seed, t_i64 a, t_i64 b);

typedef t_u64			(*t_random_urand_f)(t_any, t_u64, t_u64);
typedef t_i64			(*t_random_irand_f)(t_any, t_i64, t_i64);
typedef void			(*t_random_srand_f)(t_any, t_u64);

typedef struct s_random
{
	t_random_urand_f	urand;
	t_random_irand_f	irand;
	t_random_srand_f	srand;
	t_any				data;
}						t_random;

t_random				random_get_default(void);
t_random				random_get_unique(t_seed *seed);

void					random_srand(t_random *rand, t_seed seed);
t_u64					random_urand(t_random *rand, t_u64 a, t_u64 b);
t_i64					random_irand(t_random *rand, t_i64 a, t_i64 b);

t_u8					random_next_u8(t_random *rand);
t_u16					random_next_u16(t_random *rand);
t_u32					random_next_u32(t_random *rand);
t_u64					random_next_u64(t_random *rand);

t_i8					random_next_i8(t_random *rand);
t_i16					random_next_i16(t_random *rand);
t_i32					random_next_i32(t_random *rand);
t_i64					random_next_i64(t_random *rand);

t_f32					random_next_f32(t_random *rand);
t_f64					random_next_f64(t_random *rand);
t_f128					random_next_f128(t_random *rand);

t_string				random_next_string(t_random *rand, t_u64 len);
bool					random_coin_flip(t_random *rand);

#endif // RANDOM_H
