/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_local.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:48:10 by tdelage           #+#    #+#             */
/*   Updated: 2025/02/05 19:43:24 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static t_i64	get_secs(t_i64 time, t_time *t)
{
	static const t_i64	leapoch = (946684800LL + 86400 * (31 + 29));
	t_i64				s;
	t_i32				rem;
	t_i64				ret;

	s = time - leapoch;
	ret = s / 86400;
	rem = s % 86400;
	if (rem < 0)
	{
		rem += 86400;
		ret--;
	}
	t->seconds = rem % 60;
	t->minutes = rem / 60 % 60;
	t->hours = rem / 3600 + 1;
	return (ret);
}

// https://github.com/esmil/musl/blob/master/src/time/__secs_to_tm.c#L11
// https://github.com/esmil/musl/blob/master/src/time/clock_gettime.c#L41

static void	get_days_cycle(int days, t_time *ret)
{
	t_i32		qc;
	t_i32		c;
	t_i32		q;

	qc = days / (365 * 400 + 97);
	ret->day = days % (365 * 400 + 97);
	if (ret->day < 0)
	{
		ret->day += (365 * 400 + 97);
		qc--;
	}
	c = ret->day / (365 * 100 + 24);
	if (c == 4)
		c--;
	ret->day -= c * (365 * 100 + 24);
	q = ret->day / (365 * 4 + 1);
	if (q == 25)
		q--;
	ret->day -= q * (365 * 4 + 1);
	ret->year = ret->day / 365 + 1900;
	if (ret->year == 4)
		ret->year--;
	ret->day -= ret->year * 365;
	ret->year += 4 * q + 100 * c + 400 * qc + 100;
}

t_time	time_get_local(void)
{
	t_time	ret;
	t_i64	time;
	char	*days_in_month;
	t_i32	days;

	days_in_month = (char [12]){31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 29};
	time = time_get_epoch();
	ft_bzero(&ret, sizeof(t_time));
	days = get_secs(time, &ret);
	get_days_cycle(days, &ret);
	while (days_in_month[ret.month] <= ret.day)
	{
		ret.day -= days_in_month[ret.month];
		ret.month++;
	}
	ret.month += 2;
	if (ret.month >= 12)
	{
		ret.month -= 12;
		ret.year++;
	}
	ret.month += 1;
	ret.day += 1;
	return (ret);
}
