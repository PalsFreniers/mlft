/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:05:39 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 07:30:06 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_ptr	arena_calloc(t_arena *arena, t_size nb_elem, t_size elem_size)
{
	t_ptr	ptr;
	t_size	len;

	ptr = arena_malloc(arena, nb_elem, elem_size);
	if (ptr == NULL)
		return (NULL);
	len = nb_elem * elem_size;
	ft_bzero(ptr, len);
	return (ptr);
}
