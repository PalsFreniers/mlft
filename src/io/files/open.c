/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:17:07 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/31 17:02:48 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static t_open_mode	get_file_mode(t_cstr flags)
{
	if (ft_cstrchr(flags, 'r') != NULL)
	{
		if (ft_cstrchr(flags, 'w') != NULL)
			return (OPEN_READ_WRITE | OPEN_TRUNCATE);
		if (ft_cstrchr(flags, 'a') != NULL)
			return (OPEN_READ_WRITE | OPEN_APPEND);
		return (OPEN_READ);
	}
	if (ft_cstrchr(flags, 'w') != NULL)
	{
		if (ft_cstrchr(flags, 'a'))
			return (OPEN_WRITE | OPEN_APPEND);
		return (OPEN_WRITE | OPEN_TRUNCATE);
	}
	if (ft_cstrchr(flags, 'a'))
		return (OPEN_WRITE | OPEN_TRUNCATE);
	return (0);
}

t_file	file_open(t_cstr path, t_cstr flags)
{
	t_open_mode	mode;

	if (!path || !flags)
		return ((void)ft_errno(true, ERRNO_NULL_BUFFER), -1);
	mode = get_file_mode(flags);
	if (mode == 0)
		return ((void)ft_errno(true, ERRNO_FILE_FLAGS_UNKNOWN), -1);
	return (ft_open(path, mode, PERM_DEFAULT));
}
