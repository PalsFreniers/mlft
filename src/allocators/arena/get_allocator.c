/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:13:00 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 08:22:50 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	arena_dum_free(t_ptr a, t_ptr b)
{
	(void)a;
	(void)b;
}

static t_ptr	arena_dum_resize(t_ptr d, t_size a, t_size b, t_ptr c)
{
	(void)a;
	(void)b;
	(void)c;
	(void)d;
	return (NULL);
}

t_allocator	arena_get_allocator(t_arena *arena)
{
	t_allocator	ret;

	ret.instance = arena;
	ret.free = &arena_dum_free;
	ret.malloc = (t_allocator_malloc) & arena_malloc;
	ret.resize = &arena_dum_resize;
	ret.calloc = (t_allocator_calloc) & arena_calloc;
	return (ret);
}
