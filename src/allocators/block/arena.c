/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arena.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:08:45 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 02:28:45 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libspec/libspec_block_allocator.h>
#include <libft.h>

t_arena	*block_arena_static_storage(void)
{
	static t_arena	*__static_mlft_heap = NULL;

	if (__static_mlft_heap == NULL)
	{
		__static_mlft_heap = arena_new(BLOCK_ALLOCATOR_BLOCKS_NUMBER);
		if (__static_mlft_heap->start == NULL)
			return (NULL);
		((t_block_header *)__static_mlft_heap->start)->free = true;
		((t_block_header *)__static_mlft_heap->start)->len
			= BLOCK_ALLOCATOR_BLOCKS_NUMBER
			- sizeof(t_block_header);
		((t_block_header *)__static_mlft_heap->start)->next_init = false;
	}
	return (__static_mlft_heap);
}
