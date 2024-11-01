/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_byte.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:33:45 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 15:35:00 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_u8	stream_get_byte(t_stream *stream)
{
	t_u8	byte;

	if (stream->read(&byte, 1, stream->instance) != 1)
		return (0);
	return (byte);
}
