/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_time.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:36:22 by tdelage           #+#    #+#             */
/*   Updated: 2025/02/05 19:15:39 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TIME_H
# define FT_TIME_H

# include <types.h>

typedef struct s_time
{
	t_i32	seconds;
	t_i32	minutes;
	t_i32	hours;
	t_i32	year;
	t_i32	day;
	t_i32	month;
}			t_time;

t_time		time_get_local(void);
t_u64		time_get_epoch(void);

#endif // FT_TIME_H
