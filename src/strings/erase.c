/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:07:10 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 19:09:51 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include <libft.h>

void	string_erase(t_string *str, t_size start, t_size len)
{
	if (start > str->len)
		return ;
	if (start + len > str->len)
		len = str->len - start;
	if (len == 0)
		return ;
	ft_memmove(str->ptr + start, str->ptr + start + len, len);
	str->len -= len;
}
