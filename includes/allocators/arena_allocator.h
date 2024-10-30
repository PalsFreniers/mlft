/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arena_allocator.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:13:30 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 08:24:46 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARENA_ALLOCATOR_H
# define ARENA_ALLOCATOR_H

# include <allocators/allocators.h>
# include <types.h>

typedef struct s_arena
{
	t_ptr			start;
	t_ptr			curr;
	t_size			len;
	struct s_arena	*next;
}					t_arena;

t_arena				*arena_new(t_size size);
void				arena_free(t_arena *arena);
t_ptr				arena_malloc(t_size nb_elem, t_size elem_size,
						t_arena *arena);
t_ptr				arena_calloc(t_size nb_elem, t_size elem_size,
						t_arena *arena);
t_allocator			arena_get_allocator(t_arena *arena);

#endif // ARENA_ALLOCATOR_H
