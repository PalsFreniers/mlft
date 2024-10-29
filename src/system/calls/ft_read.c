/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:19:12 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 14:59:19 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <system/calls/call_numbers.h>

t_isize	ft_read(t_fd fd, t_ptr ptr, t_size size)
{
	t_isize	ret;

	if (fd < 0)
		return (ft_errno(true, ERRNO_BAD_FD));
	if (ptr == NULL)
		return (ft_errno(true, ERRNO_NULL_BUFFER));
	ret = ft_syscall(SYS_READ, fd, ptr, size);
	if (ret < 0)
		return (ft_errno(true, ERRNO_SYSTEM));
	return (ret);
}
