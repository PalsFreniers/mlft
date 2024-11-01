/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   streams.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:54:45 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 15:35:14 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMS_H
# define STREAMS_H

# include <types.h>

typedef t_size		(*t_stream_read)(t_ptr buffer, t_size len, t_ptr instance);
typedef t_size		(*t_stream_write)(t_ptr buffer, t_size len, t_ptr instance);
typedef void		(*t_stream_end)(t_ptr instance);

typedef struct s_stream
{
	t_stream_read	read;
	t_stream_write	write;
	t_stream_end	end;
	t_ptr			instance;
}					t_stream;

t_size				stream_read(t_stream *stream, t_ptr buffer, t_size len);
t_size				stream_write(t_stream *stream, t_ptr buffer, t_size len);
void				stream_end(t_stream *stream);
t_u8				stream_get_byte(t_stream *stream);
void				stream_send_byte(t_stream *stream, t_u8 byte);

#endif // STREAMS_H
