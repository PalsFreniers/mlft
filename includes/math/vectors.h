/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 22:46:27 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/22 23:03:16 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_H
# define VECTORS_H

# include <libft.h>

typedef struct s_vec2
{
	float	x;
	float	y;
}			t_vec2;

typedef struct s_vec3
{
	float	x;
	float	y;
	float	z;
}			t_vec3;

typedef struct s_vec4
{
	float	x;
	float	y;
	float	z;
	float	w;
}			t_vec4;

typedef struct s_ivec2
{
	int		x;
	int		y;
}			t_ivec2;

typedef struct s_ivec3
{
	int		x;
	int		y;
	int		z;
}			t_ivec3;

typedef struct s_ivec4
{
	int		x;
	int		y;
	int		z;
	int		w;
}			t_ivec4;

t_vec2		vec2_new(float x, float y);
t_vec2		vec2_new_from_one(float x);
t_vec2		*vec2_copy(t_vec2 other, t_allocator *alloc);
t_vec2		vec2_add(t_vec2 a, t_vec2 b);
t_vec2		vec2_sub(t_vec2 a, t_vec2 b);
t_vec2		vec2_mul(t_vec2 a, t_vec2 b);
t_vec2		vec2_div(t_vec2 a, t_vec2 b);

t_vec3		vec3_new(float x, float y, float z);
t_vec3		vec3_new_from_one(float x);
t_vec3		*vec3_copy(t_vec3 other, t_allocator *alloc);
t_vec3		vec3_add(t_vec3 a, t_vec3 b);
t_vec3		vec3_sub(t_vec3 a, t_vec3 b);
t_vec3		vec3_mul(t_vec3 a, t_vec3 b);
t_vec3		vec3_div(t_vec3 a, t_vec3 b);

t_vec4		vec4_new(float x, float y, float z, float w);
t_vec4		vec4_new_from_one(float x);
t_vec4		*vec4_copy(t_vec4 other, t_allocator *alloc);
t_vec4		vec4_add(t_vec4 a, t_vec4 b);
t_vec4		vec4_sub(t_vec4 a, t_vec4 b);
t_vec4		vec4_mul(t_vec4 a, t_vec4 b);
t_vec4		vec4_div(t_vec4 a, t_vec4 b);

t_ivec2		ivec2_new(int x, int y);
t_ivec2		ivec2_new_from_one(int x);
t_ivec2		*ivec2_copy(t_ivec2 other, t_allocator *alloc);
t_ivec2		ivec2_add(t_ivec2 a, t_ivec2 b);
t_ivec2		ivec2_sub(t_ivec2 a, t_ivec2 b);
t_ivec2		ivec2_mul(t_ivec2 a, t_ivec2 b);
t_ivec2		ivec2_div(t_ivec2 a, t_ivec2 b);

t_ivec3		ivec3_new(int x, int y, int z);
t_ivec3		ivec3_new_from_one(int x);
t_ivec3		*ivec3_copy(t_ivec3 other, t_allocator *alloc);
t_ivec3		ivec3_add(t_ivec3 a, t_ivec3 b);
t_ivec3		ivec3_sub(t_ivec3 a, t_ivec3 b);
t_ivec3		ivec3_mul(t_ivec3 a, t_ivec3 b);
t_ivec3		ivec3_div(t_ivec3 a, t_ivec3 b);

t_ivec4		ivec4_new(int x, int y, int z, int w);
t_ivec4		ivec4_new_from_one(int x);
t_ivec4		*ivec4_copy(t_ivec4 other, t_allocator *alloc);
t_ivec4		ivec4_add(t_ivec4 a, t_ivec4 b);
t_ivec4		ivec4_sub(t_ivec4 a, t_ivec4 b);
t_ivec4		ivec4_mul(t_ivec4 a, t_ivec4 b);
t_ivec4		ivec4_div(t_ivec4 a, t_ivec4 b);

#endif // VECTORS_H
