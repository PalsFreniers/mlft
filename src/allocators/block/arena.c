/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arena.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:08:45 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 12:09:02 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <allocators/block_allocator_utils.h>

t_arena	*block_arena_static_storage(void)
{
	static t_arena	*heap = NULL;

	if (heap == NULL)
	{
		heap = arena_new(BLOCK_ALLOCATOR_BLOCKS_NUMBER);
		if (heap->start == NULL)
			return (NULL);
		((t_block_header *)heap->start)->free = true;
		((t_block_header *)heap->start)->len = BLOCK_ALLOCATOR_BLOCKS_NUMBER
			- sizeof(t_block_header);
		((t_block_header *)heap->start)->next_init = false;
	}
	return (heap);
}
