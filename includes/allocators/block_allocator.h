/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_allocator.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 05:45:47 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 06:13:03 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLOCK_ALLOCATOR_H
# define BLOCK_ALLOCATOR_H

# include <types.h>

t_ptr	block_new(t_size elem, t_size size);
void	block_free(t_size size);
t_ptr	block_copy(t_ptr block);
t_size	block_get_size(t_ptr block);
t_ptr	block_new_init(t_size size, t_size elems, t_u8 byte);
t_ptr	block_resize(t_ptr block, t_size new_elems, t_size new_size);

#endif // BLOCK_ALLOCATOR_H
