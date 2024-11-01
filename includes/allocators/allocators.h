/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocators.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:59:38 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 15:03:44 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOCATORS_H
# define ALLOCATORS_H

# include <types.h>

# define ALLOC_MAX 0xEFFFFFFF

// last parameter to those function pointers have to be the allocator instance

typedef t_ptr			(*t_allocator_malloc)(t_size, t_size, t_ptr);
typedef t_ptr			(*t_allocator_calloc)(t_size, t_size, t_ptr);
typedef t_ptr			(*t_allocator_resize)(t_ptr, t_size, t_size, t_ptr);
typedef void			(*t_allocator_free)(t_ptr, t_ptr);

typedef struct s_allocator
{
	t_allocator_malloc	malloc;
	t_allocator_malloc	calloc;
	t_allocator_resize	resize;
	t_allocator_free	free;
	t_ptr				instance;
}						t_allocator;

t_ptr					allocator_malloc(t_allocator *alloc, t_size elems,
							t_size size);
t_ptr					allocator_calloc(t_allocator *alloc, t_size elems,
							t_size size);
t_ptr					allocator_resize(t_allocator *alloc, t_ptr ptr,
							t_size elems, t_size size);
void					allocator_free(t_allocator *alloc, t_ptr ptr);

#endif // ALLOCATORS_H
