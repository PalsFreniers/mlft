/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_suitable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:57:49 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 07:16:32 by tdelage          ###   ########.fr       */
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

	while (arena && !has_capacity(arena, size))
	{
		last = arena;
		arena = arena->next;
	}
	if (!arena)
	{
		arena = arena_new(size);
		last->next = arena;
	}
	return (arena);
}
