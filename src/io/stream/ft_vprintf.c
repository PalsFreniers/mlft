/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:01:50 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/28 16:48:41 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io/streams.h"
#include <libft.h>

static void	uputd_vprintf(t_stream *stream, int radix, bool uppercase, int val)
{
	t_cstr	digits;
	char	num[32];
	int		i;

	i = 0;
	digits = "0123456789abcdef0123456789ABCDEF";
	if (val == 0)
	{
		stream_send_byte(stream, '0');
		return ;
	}
	while (val)
	{
		num[i] = digits[(val % radix) + (16 * uppercase)];
		val /= radix;
		i++;
	}
	while (--i >= 0)
		stream_send_byte(stream, num[i]);
}

static void	putd_vprintf(t_stream *stream, int radix, bool uppercase, int val)
{
	if (val < 0)
		stream_send_byte(stream, '-');
	uputd_vprintf(stream, radix, uppercase, val);
}

static void	ft_vprintf_stream_percent(t_stream *stream, const t_cstr fmt,
		t_size *i, va_list lst)
{
	t_cstr		tmp;
	t_string	tmp2;

	(*i)++;
	if (fmt[*i] == 's')
	{
		tmp = va_arg(lst, t_cstr);
		stream_write(stream, tmp, ft_cstrlen(tmp));
	}
	else if (fmt[*i] == 'S')
	{
		tmp2 = va_arg(lst, t_string);
		stream_write(stream, tmp2.ptr, tmp2.len);
	}
	else if (fmt[*i] == 'c')
		stream_send_byte(stream, va_arg(lst, t_u32));
	else if (fmt[*i] == 'd')
		putd_vprintf(stream, 10, false, va_arg(lst, t_u32));
	(*i)++;
}

void	ft_vprintf(t_stream *stream, const t_cstr fmt, va_list lst)
{
	t_size	len;
	t_size	i;

	len = ft_cstrlen(fmt);
	i = 0;
	while (i < len)
	{
		if (fmt[i] == '%')
			ft_vprintf_stream_percent(stream, fmt, &i, lst);
		else
			stream_send_byte(stream, fmt[i++]);
	}
}
