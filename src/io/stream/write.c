/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:22:48 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 15:30:54 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_size	stream_write(t_stream *stream, t_ptr buff, t_size size)
{
	return (stream->write(buff, size, stream->instance));
}
