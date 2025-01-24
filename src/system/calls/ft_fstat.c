/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:59:08 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/24 22:21:34 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

bool	ft_fstat(t_fd fd, t_stat *buf)
{
	if (fd < 0)
		return ((void)ft_errno(true, ERRNO_BAD_FD), false);
	if (ft_syscall(SYS_FSTAT, fd, buf) < 1)
		return ((void)ft_errno(true, ERRNO_SYSTEM), false);
	return (true);
}
