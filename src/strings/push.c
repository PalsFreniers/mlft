/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:03:32 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/15 00:08:42 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <strings_utils.h>

void	string_push(t_string *str, char c)
{
	if (str->unowned)
		return ((void)string_errno(true, STRING_NO_MODIFY_UNOWNED));
	if (str->capacity <= str->len + 1 && str->ptr != NULL)
		string_resize(str);
	if (str->ptr == NULL)
		return ;
	ft_memmove(str->ptr + 1, str->ptr, str->len++);
	str->ptr[0] = c;
}
