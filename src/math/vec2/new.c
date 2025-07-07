/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:32:40 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/21 00:04:11 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_vec2	vec2_new(float x, float y)
{
	return ((t_vec2){x, y});
}

t_vec2	vec2_new_from_one(float x)
{
	return (vec2_new(x, x));
}
