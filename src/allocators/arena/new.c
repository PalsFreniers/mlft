/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:20:20 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/02 02:27:53 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libspec/libspec_arena_allocator.h>
#include <libft.h>

t_arena	*arena_new(t_size size)
{
	t_arena	*ret;

	if (size == 0)
		return ((void)ft_errno(true, ERRNO_ZERO_CAPACITY), NULL);
	ret = ft_mmap((t_mmap_params){NULL, size + sizeof(t_arena), -1, 0},
			MAP_PROT_READ | MAP_PROT_WRITE,
			MAP_FLAG_PRIVATE | MAP_FLAG_ANONYMOUS);
	if (ret == NULL || ret == (t_ptr)-1UL)
		return (NULL);
	ret->curr = ret + sizeof(t_arena);
	ret->len = size;
	ret->next = NULL;
	ret->start = ret->curr;
	return (ret);
}
