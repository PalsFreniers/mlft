/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assert.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 05:19:16 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/09 05:21:36 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io/streams.h>
#include <types.h>

void	ft_stream_cassert(bool condition, t_cstr message, t_stream *stream,
			t_exit_code code);
void	ft_stream_assert(bool condition, t_cstr message, t_stream *stream);
void	ft_cassert(bool condition, t_cstr message, t_exit_code code);
void	ft_assert(bool condition, t_cstr message);
