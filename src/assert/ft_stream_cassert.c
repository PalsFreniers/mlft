/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stream_cassert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 05:15:41 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/25 01:07:18 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#ifndef COLORED

void	ft_stream_cassert(bool condition, t_cstr message, t_stream *stream,
		t_exit_code code)
{
	if (!condition)
	{
		ft_printf(stream, "[FATAL] => assertion failed : %s\n", message);
		ft_exit(code);
	}
}

#else // COLORED

void	ft_stream_cassert(bool condition, t_cstr message, t_stream *stream,
		t_exit_code code)
{
	if (!condition)
	{
		ft_printf(stream, RED BOLD "[FATAL] " RESET
			"=> assertion failed : %s\n", message);
		ft_exit(code);
	}
}

#endif // COLORED
