/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:41:39 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 07:30:40 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <allocators/arena_allocator_utils.h>

#define ALLOC_MAX 0xEFFFFFFF

t_ptr	arena_malloc(t_arena *arena, t_size nb_elem, t_size elem_size)
{
	t_size	len;
	t_arena	*a;
	t_ptr	ret;
	t_errno	last;

	if (nb_elem == 0 || elem_size == 0)
		return ((void)ft_errno(true, ERRNO_ZERO_CAPACITY), NULL);
	if (elem_size > ALLOC_MAX / nb_elem)
		return ((void)ft_errno(true, ERRNO_ALLOC_OVERSIZE), NULL);
	if (nb_elem > ALLOC_MAX / elem_size)
		return ((void)ft_errno(true, ERRNO_ALLOC_OVERSIZE), NULL);
	len = nb_elem * elem_size;
	last = ft_errno(false, 0);
	ft_errno(true, ERRNO_SUCCESS);
	a = arena_get_suitable(arena, len);
	if (ft_errno(false, 0) != ERRNO_SUCCESS)
		return (NULL);
	ft_errno(true, last);
	ret = a->curr;
	a->curr += len;
	return (ret);
}
