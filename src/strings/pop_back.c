/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:08:54 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/15 00:12:28 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <strings_utils.h>

char	string_pop_back(t_string *str)
{
	if (str->unowned)
		return ((void)string_errno(true, STRING_NO_MODIFY_UNOWNED), -1);
	if (str->len == 0)
		return ((void)string_errno(true, STRING_EMPTY), -1);
	return (str->ptr[--str->len]);
}
