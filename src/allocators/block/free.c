/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:55:28 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 12:17:20 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <allocators/block_allocator_utils.h>
#include <libft.h>

static void	block_arena_free_empty(void)
{
	t_arena			*arena;
	t_arena			*next;
	t_block_header	*header;

	arena = block_arena_static_storage();
	if (arena == NULL)
		return ;
	while (arena->next)
	{
		next = arena->next;
		header = next->start;
		if (header->free && next->len <= header->len + sizeof(t_block_header))
		{
			arena->next = next->next;
			ft_munmap((t_mmap_params){next, next->len, 0, 0});
		}
		arena = arena->next;
	}
}

void	block_free(t_ptr block)
{
	t_block_header	*header;
	t_block_header	*tmp;

	if (block == NULL)
		return ;
	header = block - sizeof(t_block_header);
	header->free = true;
	tmp = block + header->len;
	while (tmp->free)
	{
		header->len += sizeof(t_block_header) + tmp->len;
		header->next_init = tmp->next_init;
		if (!header->next_init)
			break ;
		tmp = (t_ptr)tmp + sizeof(t_block_header) + tmp->len;
	}
	if (header->len > BLOCK_ALLOCATOR_BLOCKS_NUMBER / 2)
		block_arena_free_empty();
}
