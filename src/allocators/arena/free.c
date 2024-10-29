/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:33:50 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 06:40:32 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	arena_free(t_arena *arena)
{
	t_arena	*next;

	if (arena == NULL)
		return ((void)ft_errno(true, ERRNO_NULL_BUFFER));
	while (arena)
	{
		next = arena->next;
		ft_munmap((t_mmap_params){arena, arena->len, 0, 0});
		arena = next;
	}
}
