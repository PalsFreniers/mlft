/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:57:56 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 16:05:04 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include <stdbool.h>
# include <stdint.h>

typedef uint8_t		t_u8;
typedef uint16_t	t_u16;
typedef uint32_t	t_u32;
typedef uint64_t	t_u64;

typedef int8_t		t_i8;
typedef int16_t		t_i16;
typedef int32_t		t_i32;
typedef int64_t		t_i64;

typedef uintptr_t	t_uptr;
typedef intptr_t	t_iptr;
typedef void		*t_ptr;

typedef char		*t_cstr;

typedef t_u64		t_size;
typedef t_i64		t_isize;

typedef int			t_fd;

typedef int			t_exit_code;
typedef t_u64		t_offset;

#endif // TYPES_H
