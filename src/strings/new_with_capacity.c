/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_with_capacity.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:31:18 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 17:52:38 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"
#include <libft.h>

t_string	string_new_with_capacity(t_size capacity)
{
	t_ptr	str;

	str = block_malloc(capacity, sizeof(char));
	if (str == NULL)
		return ((void)string_errno(true, STRING_ALLOC_ERROR), string_zero());
	return ((t_string){
		.ptr = str,
		.capacity = capacity,
		.len = 0,
		.unowned = false,
	});
}
