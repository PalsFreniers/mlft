/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errno.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:58:14 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 17:59:55 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_string_error	string_errno(bool set, t_string_error val)
{
	static t_string_error	_string_error_static_storage;

	_string_error_static_storage = STRING_SUCCESS;
	if (set)
		_string_error_static_storage = val;
	return (_string_error_static_storage);
}
