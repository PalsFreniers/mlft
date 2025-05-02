/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:41:39 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 02:31:10 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libspec/libspec_arena_allocator.h>
#include <libft.h>

t_ptr	arena_malloc(t_size nb_elem, t_size elem_size, t_arena *arena)
{
	t_size	len;
	t_arena	*a;
	t_ptr	ret;

	if (nb_elem == 0 || elem_size == 0)
		return ((void)ft_errno(true, ERRNO_ZERO_CAPACITY), NULL);
	if (elem_size > ALLOC_MAX / nb_elem)
		return ((void)ft_errno(true, ERRNO_ALLOC_OVERSIZE), NULL);
	if (nb_elem > ALLOC_MAX / elem_size)
		return ((void)ft_errno(true, ERRNO_ALLOC_OVERSIZE), NULL);
	len = nb_elem * elem_size;
	a = arena_get_suitable(arena, len);
	if (a == NULL)
		return (NULL);
	ret = a->curr;
	a->curr += len;
	return (ret);
}
