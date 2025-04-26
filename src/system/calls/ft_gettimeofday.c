/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gettimeofday.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:12:13 by tdelage           #+#    #+#             */
/*   Updated: 2025/04/26 04:09:26 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_gettimeofday(t_timeval *tv)
{
	if (tv == NULL)
		return ((void)ft_errno(true, ERRNO_NULL_BUFFER));
	if (ft_syscall(SYS_GETTIMEOFDAY, tv, NULL) < 0)
		return ((void)ft_errno(true, ERRNO_SYSTEM));
}
