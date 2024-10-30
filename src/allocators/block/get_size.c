/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:23:12 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 12:24:25 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <allocators/block_allocator_utils.h>
#include <libft.h>

t_size	block_get_size(t_ptr block)
{
	t_block_header	*header;

	header = block - sizeof(t_block_header);
	return (header->len);
}
