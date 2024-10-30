/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:05:39 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 12:21:13 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_ptr	arena_calloc(t_size nb_elem, t_size elem_size, t_arena *arena)
{
	t_ptr	ptr;

	ptr = arena_malloc(nb_elem, elem_size, arena);
	if (ptr == NULL)
		return (NULL);
	return (ft_bzero(ptr, nb_elem * elem_size));
}
