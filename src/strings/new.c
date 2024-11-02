/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:25:58 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 17:32:38 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_string	string_new(t_cstr str, t_size len)
{
	return ((t_string){
		.ptr = str,
		.len = len,
		.capacity = len,
		.unowned = false,
	});
}
