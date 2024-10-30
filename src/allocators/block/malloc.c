/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:51:57 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 11:53:44 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <allocators/block_allocator_utils.h>
#include <libft.h>

t_ptr	block_malloc(t_size nb_elem, t_size elem_size)
{
	t_size			len;
	t_block_header	*head;

	if (nb_elem == 0 || elem_size == 0)
		return ((void)ft_errno(true, ERRNO_ZERO_CAPACITY), NULL);
	if (elem_size > ALLOC_MAX / nb_elem)
		return ((void)ft_errno(true, ERRNO_ALLOC_OVERSIZE), NULL);
	if (nb_elem > ALLOC_MAX / elem_size)
		return ((void)ft_errno(true, ERRNO_ALLOC_OVERSIZE), NULL);
	len = nb_elem * elem_size;
	head = block_get_first_free(len);
	if (head == NULL)
		return (NULL);
	head->free = false;
	return ((t_u8 *)head + sizeof(t_block_header));
}
