/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:02:23 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 15:31:11 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	allocator_free(t_allocator *alloc, t_ptr ptr)
{
	alloc->free(ptr, alloc->instance);
}
