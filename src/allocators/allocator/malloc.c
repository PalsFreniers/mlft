/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:58:26 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 14:59:56 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_ptr	allocator_malloc(t_allocator *alloc, t_size elems, t_size size)
{
	return (alloc->malloc(elems, size, alloc->instance));
}
