/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocators.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:59:38 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 09:04:41 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOCATORS_H
# define ALLOCATORS_H

# include <types.h>

# define ALLOC_MAX 0xEFFFFFFF

// last parameter to thos function pointer have to be instance

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

#endif // ALLOCATORS_H
