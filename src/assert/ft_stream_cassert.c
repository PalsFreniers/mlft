/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stream_cassert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 05:15:41 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/09 05:29:31 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_stream_cassert(bool condition, t_cstr message, t_stream *stream,
		t_exit_code code)
{
	if (!condition)
	{
		stream_write(stream, "[FATAL] => assertion failed : ",
			ft_cstrlen(message));
		stream_write(stream, message, ft_cstrlen(message));
		stream_send_byte(stream, '\n');
		ft_exit(code);
	}
}
