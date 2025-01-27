/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   streams.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:54:45 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/24 22:26:34 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMS_H
# define STREAMS_H

# include <stdarg.h>
# include <types.h>

typedef t_size			(*t_stream_read)(t_ptr buffer, t_size len,
				t_ptr instance);
typedef t_size			(*t_stream_write)(t_ptr buffer, t_size len,
				t_ptr instance);
typedef void			(*t_stream_end)(t_ptr instance);
typedef t_size			(*t_stream_available)(t_ptr instance);

typedef struct s_stream
{
	t_stream_read		read;
	t_stream_write		write;
	t_stream_end		end;
	t_stream_available	available;
	t_ptr				instance;
}						t_stream;

t_size					stream_read(t_stream *stream, t_ptr buffer, t_size len);
t_size					stream_write(t_stream *stream, t_ptr buffer,
							t_size len);
void					stream_end(t_stream *stream);
t_u8					stream_get_byte(t_stream *stream);
void					stream_send_byte(t_stream *stream, t_u8 byte);
t_size					stream_get_available_size(t_stream *stream);

void					ft_printf(t_stream *stream, const t_cstr fmt, ...);
void					ft_vprintf(t_stream *stream, const t_cstr fmt,
							va_list lst);

#endif // STREAMS_H
