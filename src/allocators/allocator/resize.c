/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:01:02 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 15:02:16 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_ptr	allocator_resize(t_allocator *alloc, t_ptr ptr, t_size elems,
		t_size size)
{
	return (alloc->resize(ptr, elems, size, alloc->instance));
}
