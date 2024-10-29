/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errno.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:06:39 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 09:32:39 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno/errno.h>
#include <libft.h>

t_errno	ft_errno(bool set, t_errno value)
{
	static t_errno	_errno_static_internal = ERRNO_SUCCESS;

	if (set)
		_errno_static_internal = value;
	return (_errno_static_internal);
}
