/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_suitable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:57:49 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 10:25:42 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <allocators/arena_allocator_utils.h>

static bool	has_capacity(t_arena *arena, t_size size)
{
	return (size < arena->len - (arena->curr - arena->start));
}

t_arena	*arena_get_suitable(t_arena *arena, t_size size)
{
	t_arena	*last;
	t_size	len;

	while (arena && !has_capacity(arena, size))
	{
		last = arena;
		arena = arena->next;
	}
	if (!arena)
	{
		len = last->len;
		if (size > len)
			len = size;
		arena = arena_new(len);
		last->next = arena;
	}
	return (arena);
}
