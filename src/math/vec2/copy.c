/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 00:06:12 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/21 00:11:06 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_vec2	*vec2_copy(t_vec2 self, t_allocator *alloc)
{
	t_vec2	*v;

	v = allocator_malloc(alloc, 1, sizeof(t_vec2));
	if (!v)
		return (NULL);
	ft_memcpy(v, &self, sizeof(t_vec2));
	return (v);
}
