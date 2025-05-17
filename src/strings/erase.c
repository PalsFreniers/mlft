/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:07:10 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/17 16:47:07 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	string_erase(t_string *str, t_size start, t_size len)
{
	if (start > str->len)
		return ;
	if (start + len > str->len)
		len = str->len - start;
	if (len <= 0)
		return ((void)string_errno(true, STRING_BAD_OFFSET));
	ft_memmove(str->ptr + start, str->ptr + start + len, len);
	str->len -= len;
}
