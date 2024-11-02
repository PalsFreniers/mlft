/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_u_cstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:29:44 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 17:34:34 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_string	string_new_u_cstr(t_cstr str)
{
	return ((t_string){
		.ptr = str,
		.len = ft_cstrlen(str),
		.capacity = 0,
		.unowned = true,
	});
}
