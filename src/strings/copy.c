/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:36:45 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 18:42:12 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_string	string_copy(t_string str)
{
	t_string	ret;

	ret = string_new_with_capacity(str.len);
	if (ret.ptr == NULL)
		return (string_zero());
	ft_memcpy(ret.ptr, str.ptr, str.len);
	ret.len = str.len;
	ret.unowned = false;
	return (ret);
}
