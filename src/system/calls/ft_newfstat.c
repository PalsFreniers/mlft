/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newfstat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:09:02 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/24 22:10:14 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

bool	ft_newfstat(t_fd fd, t_stat *buf)
{
	return (ft_newstatat(fd, "", buf, NEWSTATAT_EMPTY_PATH));
}
