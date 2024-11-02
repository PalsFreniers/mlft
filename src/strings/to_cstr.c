/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_cstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:43:11 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 18:46:25 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_cstr	string_to_cstr(t_string str)
{
	t_string	ret;

	ret = string_new_with_capacity(str.len + 1);
	if (ret.ptr == NULL)
		return (NULL);
	ft_memcpy(ret.ptr, str.ptr, str.len);
	ret.ptr[str.len] = '\0';
	return (ret.ptr);
}
