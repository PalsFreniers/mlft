/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:25:14 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 12:28:05 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <allocators/block_allocator_utils.h>
#include <libft.h>

t_ptr	block_copy(t_ptr block)
{
	t_block_header	*header;
	t_ptr			ptr;

	header = block - sizeof(t_block_header);
	if (header->free)
		return (NULL);
	ptr = block_malloc(header->len, 1);
	return (ft_memcpy(ptr, block, header->len));
}
