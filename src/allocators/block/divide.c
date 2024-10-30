/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:40:40 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 12:41:11 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <allocators/block_allocator_utils.h>

t_block_header	*block_divide(t_block_header *header, t_size size)
{
	t_block_header	*tmp;

	if (header->len - size > sizeof(t_block_header) + 5)
	{
		tmp = (t_block_header *)((t_u8 *)header + sizeof(t_block_header)
				+ size);
		tmp->free = true;
		tmp->len = header->len - sizeof(t_block_header) - size;
		tmp->next_init = header->next_init;
		header->next_init = true;
		header->len = size;
	}
	return (header);
}
