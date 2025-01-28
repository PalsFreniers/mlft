/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_time.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:03:48 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/28 16:05:47 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_i64	ft_time(t_i64 *time)
{
	t_i64	ret;

	ret = ft_syscall(SYS_TIME, time);
	if (ret < 0)
		return ((void)ft_errno(true, ERRNO_SYSTEM), -1);
	return (ret);
}
