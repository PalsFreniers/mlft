/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_cstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:28:13 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 19:22:20 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_string	string_new_cstr(t_cstr str)
{
	t_size	len;

	len = ft_cstrlen(str);
	return ((t_string){
		.ptr = str,
		.len = len,
		.capacity = len + 1,
		.unowned = false,
	});
}
