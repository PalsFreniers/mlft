/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_allocator.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 05:45:47 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 13:00:19 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLOCK_ALLOCATOR_H
# define BLOCK_ALLOCATOR_H

# include <allocators/allocators.h>
# include <types.h>

t_ptr		block_malloc(t_size elem, t_size size);
void		block_free(t_ptr block);
t_ptr		block_copy(t_ptr block);
t_size		block_get_size(t_ptr block);
t_ptr		block_calloc(t_size nb_elem, t_size elem_size);
t_ptr		block_resize(t_ptr block, t_size new_elems, t_size new_size);
t_allocator	block_get_allocator(void);

// do not use this function if you don't know what you are doing,
// it can disable your ability to use malloc without crash
// it is inside the header so that the compiler know
// to call it at the end of the program
void		destroy_block_arena(void) __attribute__((destructor));

#endif // BLOCK_ALLOCATOR_H
