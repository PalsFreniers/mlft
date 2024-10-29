/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arena_allocator_utils.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:26:53 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 06:57:30 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARENA_ALLOCATOR_UTILS_H
# define ARENA_ALLOCATOR_UTILS_H

# include <allocators/arena_allocator.h>

t_arena	arena_empty(void);
t_arena	*arena_get_suitable(t_arena *first, t_size size);

#endif // ARENA_ALLOCATOR_UTILS_H
