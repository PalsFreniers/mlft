/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:21:18 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 15:23:04 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_size	stream_read(t_stream *stream, t_ptr buff, t_size size)
{
	return (stream->read(buff, size, stream->instance));
}
