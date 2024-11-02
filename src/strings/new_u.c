/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:27:49 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 17:34:26 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_string	string_new_u(t_cstr str, t_size len)
{
	return ((t_string){
		.ptr = str,
		.len = len,
		.capacity = 0,
		.unowned = true,
	});
}
