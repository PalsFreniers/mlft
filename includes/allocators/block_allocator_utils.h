/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_allocator_utils.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:02:07 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/05 19:04:01 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLOCK_ALLOCATOR_UTILS_H
# define BLOCK_ALLOCATOR_UTILS_H

# include <allocators/arena_allocator.h>
# include <types.h>

# define BLOCK_ALLOCATOR_BLOCKS_NUMBER 1000000

typedef struct s_block_header
{
	t_size		len;
	bool		free;
	bool		next_init;
}				t_block_header;

t_block_header	*block_get_first_free(t_size size);
t_arena			*block_arena_static_storage(void);
t_block_header	*block_divide(t_block_header *header, t_size size);

#endif // BLOCK_ALLOCATOR_UTILS_H
