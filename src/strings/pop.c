/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:12:52 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/17 16:49:05 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	string_pop(t_string *str)
{
	char	c;

	if (str->unowned)
		return ((void)string_errno(true, STRING_NO_MODIFY_UNOWNED), -1);
	if (str->len == 0)
		return ((void)string_errno(true, STRING_EMPTY), -1);
	c = str->ptr[0];
	ft_memmove(str->ptr, str->ptr + 1, --str->len);
	return (c);
}
