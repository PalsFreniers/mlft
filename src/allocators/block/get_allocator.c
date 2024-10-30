/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:29:38 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 08:32:17 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_allocator	block_get_allocator(void)
{
	t_allocator	ret;

	ret.instance = NULL;
	ret.malloc = (t_allocator_malloc) & block_malloc;
	ret.calloc = (t_allocator_calloc) & block_calloc;
	ret.resize = (t_allocator_resize) & block_resize;
	ret.free = (t_allocator_free) & block_free;
	return (ret);
}
