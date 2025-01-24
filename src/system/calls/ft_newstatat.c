/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstatat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:00:49 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/24 22:08:17 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

bool	ft_newstatat(t_fd fd, t_cstr path, t_stat *buf, t_newstatat_mode mode)
{
	if (!buf)
		return ((void)ft_errno(true, ERRNO_NULL_BUFFER), false);
	if (!(mode & NEWSTATAT_EMPTY_PATH) && !path)
		return ((void)ft_errno(true, ERRNO_NULL_CSTR), false);
	if ((mode & NEWSTATAT_EMPTY_PATH) && fd < 0 && fd != FDAT_CWD)
		return ((void)ft_errno(true, ERRNO_BAD_FD), false);
	if (ft_syscall(SYS_NEWSTATAT, fd, path, buf, mode) < 0)
		return ((void)ft_errno(true, ERRNO_SYSTEM), false);
	return (true);
}
