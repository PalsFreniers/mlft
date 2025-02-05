/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_epoch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:02:32 by tdelage           #+#    #+#             */
/*   Updated: 2025/02/05 19:11:54 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_u64	time_get_epoch(void)
{
	t_timeval	time;

	ft_gettimeofday(&time);
	return (time.secs + (time.micro_secs * 1e3));
}
