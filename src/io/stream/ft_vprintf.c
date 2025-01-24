/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:01:50 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/09 06:06:31 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io/streams.h"
#include <libft.h>

void	ft_vprintf_stream_percent(t_stream *stream, const t_cstr fmt, t_size *i,
		va_list lst)
{
	t_cstr		tmp;
	t_string	tmp2;

	(*i)++;
	// get modifiers;
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
			stream_send_byte(stream, fmt[i]);
	}
}
