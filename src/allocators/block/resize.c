/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:37:15 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 18:53:25 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <allocators/block_allocator_utils.h>
#include <libft.h>

static void	block_collapse_free(t_block_header *tmp, t_block_header *header)
{
	while (tmp->free)
	{
		header->len += sizeof(t_block_header) + tmp->len;
		header->next_init = tmp->next_init;
		if (!header->next_init)
			break ;
		tmp = (t_ptr)tmp + sizeof(t_block_header) + tmp->len;
	}
}

static t_ptr	block_resize_less_equal(t_ptr block, t_size len,
		t_block_header *header)
{
	if (len == header->len)
		return (block);
	if (len < header->len)
		return ((t_ptr)block_divide(header, len) + sizeof(t_block_header));
	return (NULL);
}

t_ptr	block_resize(t_ptr block, t_size new_elems, t_size new_size)
{
	t_block_header	*header;
	t_size			len;
	t_block_header	*tmp;
	t_ptr			new;
	t_size			block_size;

	if (block == NULL)
		return (block_malloc(new_elems, new_size));
	header = block - sizeof(t_block_header);
	block_size = header->len;
	len = new_elems * new_size;
	if (len <= header->len)
		return (block_resize_less_equal(block, len, header));
	tmp = block + header->len;
	if (tmp->free)
	{
		block_collapse_free(tmp, header);
		if (len <= header->len)
			return ((t_ptr)block_divide(header, len) + sizeof(t_block_header));
	}
	new = block_malloc(new_elems, new_size);
	if (new != NULL)
		ft_memcpy(new, block, block_size);
	block_free(block);
	return (new);
}
