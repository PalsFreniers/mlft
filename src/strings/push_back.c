/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:08:54 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/17 16:49:22 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <libspec/libspec_string.h>

void	string_push_back(t_string *str, char c)
{
	if (str->unowned)
		return ((void)string_errno(true, STRING_NO_MODIFY_UNOWNED));
	if (str->capacity <= str->len + 1 && str->ptr != NULL)
		string_resize(str);
	if (str->ptr == NULL)
		return ;
	str->ptr[str->len++] = c;
}
