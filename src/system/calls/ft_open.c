/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:24:27 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 11:29:48 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_fd	ft_open(t_cstr filepath, t_open_mode mode, t_file_permissions perms)
{
	t_fd	ret;

	if (filepath == NULL)
		return (ft_errno(true, ERRNO_NULL_BUFFER));
	ret = ft_syscall(SYS_OPEN, filepath, mode, perms);
	if (ret < 0)
		return (ft_errno(true, ERRNO_SYSTEM));
	return (ret);
}
