/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:00:08 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/09 05:00:19 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_ptr	allocator_calloc(t_allocator *alloc, t_size elems, t_size size)
{
	return (alloc->calloc(elems, size, alloc->instance));
}
