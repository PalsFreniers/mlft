/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmetic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 00:11:49 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/21 00:18:42 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_vec2	vec2_add(t_vec2 a, t_vec2 b)
{
	return (vec2_new(a.x + b.x, a.y + b.y));
}

t_vec2	vec2_sub(t_vec2 a, t_vec2 b)
{
	return (vec2_new(a.x - b.x, a.y - b.y));
}

t_vec2	vec2_mul(t_vec2 a, t_vec2 b)
{
	return (vec2_new(a.x * b.x, a.y * b.y));
}

t_vec2	vec2_div(t_vec2 a, t_vec2 b)
{
	return (vec2_new(a.x / b.x, a.y / b.y));
}

t_vec2	vec2_scale(t_vec2 a, float scale)
{
	return (vec2_mul(a, vec2_new_from_one(scale)));
}
