/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_first_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:12:03 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 12:40:28 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <allocators/block_allocator_utils.h>
#include <libft.h>

void	__attribute__((destructor))	destroy_block_arena(void)
{
	t_arena	*arena;

	arena = block_arena_static_storage();
	arena_free(arena);
}

static void	block_init_new_arena(t_arena *arena, t_size size)
{
	t_size			alloc;
	t_block_header	*header;

	alloc = BLOCK_ALLOCATOR_BLOCKS_NUMBER;
	if (alloc < size + sizeof(t_block_header))
		alloc = size + sizeof(t_block_header);
	arena->next = arena_new(alloc);
	header = arena->start;
	header->next_init = false;
	header->free = true;
	header->len = alloc - sizeof(t_block_header);
}

t_block_header	*block_get_first_free(t_size size)
{
	t_arena			*arena;
	t_block_header	*header;

	arena = block_arena_static_storage();
	if (arena == NULL)
		return (NULL);
	header = arena->start;
	while (header != NULL)
	{
		if (header->free && header->len >= size)
			return (block_divide(header, size));
		if (header->next_init)
			header = (t_block_header *)((t_u8 *)header + sizeof(t_block_header)
					+ header->len);
		else
		{
			if (arena->next == NULL)
				block_init_new_arena(arena, size);
			arena = arena->next;
			header = arena->start;
		}
	}
	return (header);
}
