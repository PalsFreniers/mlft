/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:29:38 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 04:32:07 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_allocator	block_get_allocator(void)
{
	t_allocator	ret;

	ret.instance = NULL;
	ret.malloc = (t_allocator_malloc_f)block_malloc;
	ret.calloc = (t_allocator_calloc_f)block_calloc;
	ret.resize = (t_allocator_resize_f)block_resize;
	ret.free = (t_allocator_free_f)block_free;
	return (ret);
}
