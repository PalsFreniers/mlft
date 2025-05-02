/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_allocator.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 05:45:47 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 01:37:11 by tdelage          ###   ########.fr       */
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

#endif // BLOCK_ALLOCATOR_H
