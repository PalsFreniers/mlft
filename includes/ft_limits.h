/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 04:57:45 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/14 23:51:02 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIMITS_H
# define FT_LIMITS_H

# include <types.h>

# define MAX_U8 0xFF
# define MAX_U16 0xFFFF
# define MAX_U32 0xFFFFFFFF
# define MAX_U64 0xFFFFFFFFFFFFFFFF

# define MAX_I8 0x7F
# define MAX_I16 0x7FFF
# define MAX_I32 0x7FFFFFFF
# define MAX_I64 0x7FFFFFFFFFFFFFFF

# define MIN_I8 0x80
# define MIN_I16 0x8000
# define MIN_I32 0x80000000
# define MIN_I64 0x8000000000000000

# define MAX_F32 3.402823e+38
# define MAX_F64 1.797693e+308
# define MAX_F128 1.189731e+4932L

# define MIN_F32 1.175494e-38
# define MIN_F64 2.225074e-308
# define MIN_F128 3.362103e-4932L

t_u64	limit_umax_for(t_u64 bitlen);
t_i64	limit_max_for(t_u8 bitlen);
t_i64	limit_min_for(t_u8 bitlen);

#endif // FT_LIMITS_H
