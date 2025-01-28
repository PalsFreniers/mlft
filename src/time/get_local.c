/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_local.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:48:10 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/28 19:41:21 by tdelage          ###   ########.fr       */
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

//https://github.com/esmil/musl/blob/master/src/time/__secs_to_tm.c#L11

t_time	time_get_local(void)
{
	t_time				ret;
	t_i64				time;
	static const char	days_in_month[] = {31, 30, 31, 30, 31, 31, 30, 31, 30,
		31, 31, 29};
	int					days;

	time = ft_time(NULL);
	ft_bzero(&ret, sizeof(t_time));
	days = get_secs(time, &ret);
        int qc = days / (365*400 + 97);
        int rem = days % (365*400 + 97);
        if(qc == 4) qc--;

	return (ret);
}
