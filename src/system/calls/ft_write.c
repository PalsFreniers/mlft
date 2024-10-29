/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:56:26 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 15:00:03 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <system/calls/call_numbers.h>

t_isize	ft_write(t_fd fd, t_ptr ptr, t_size size)
{
	t_uptr	ret;

	if (fd < 0)
		return (ft_errno(true, ERRNO_BAD_FD));
	if (ptr == NULL)
		return (ft_errno(true, ERRNO_NULL_BUFFER));
	ret = ft_syscall(SYS_WRITE, fd, ptr, size);
	if (ret < 0)
		return (ft_errno(true, ERRNO_SYSTEM));
	return (ret);
}
