/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:54:32 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 18:59:22 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <strings_utils.h>

bool	string_resize(t_string *str)
{
	if (str->unowned)
		return ((void)string_errno(true, STRING_NO_MODIFY_UNOWNED), false);
	str->ptr = block_resize(str->ptr, str->capacity * 2, sizeof(char));
	if (str->ptr == NULL)
		return ((void)string_errno(true, STRING_ALLOC_ERROR), false);
	str->capacity *= 2;
	return (true);
}
