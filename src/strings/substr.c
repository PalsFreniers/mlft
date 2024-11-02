/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:51:44 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 20:57:42 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_string	string_substr(t_string str, t_size start, t_size len)
{
	if (start < 0 || start >= str.len)
		return ((void)string_errno(true, STRING_BAD_OFFSET), string_zero());
	if (start + len > str.len)
		return ((void)string_errno(true, STRING_BAD_OFFSET), string_zero());
	return (string_new_u(str.ptr + start, len));
}
