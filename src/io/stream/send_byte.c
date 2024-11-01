/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_byte.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:35:52 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 15:36:28 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	stream_send_byte(t_stream *stream, t_u8 byte)
{
	stream->write(&byte, 1, stream->instance);
}
