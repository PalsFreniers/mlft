/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:59:56 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 19:04:40 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <strings_utils.h>

void	string_append(t_string *str, t_string other)
{
	if (str->unowned)
		return ((void)string_errno(true, STRING_NO_MODIFY_UNOWNED));
	while (str->capacity < str->len + other.len && str->ptr != NULL)
		string_resize(str);
	if (str->ptr == NULL)
		return ;
	ft_memmove(str->ptr + str->len, other.ptr, other.len);
	str->len += other.len;
}
