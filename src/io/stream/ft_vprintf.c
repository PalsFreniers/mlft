/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:01:50 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 22:06:18 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io/streams.h"
#include <libft.h>

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
