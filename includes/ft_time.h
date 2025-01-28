/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_time.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:36:22 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/28 15:50:01 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TIME_H
# define FT_TIME_H

typedef struct s_time
{
	int	seconds;
	int	minutes;
	int	hours;
	int	year;
	int	day;
	int	month;
}		t_time;

t_time	time_get_local(void);

#endif // FT_TIME_H
