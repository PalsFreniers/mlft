/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stream_std.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:24:39 by tdelage           #+#    #+#             */
/*   Updated: 2025/02/05 19:26:32 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_stream	stream_stdin(void)
{
	static const t_file	stdin = STDIN;

	return (file_to_stream((t_file *)&stdin));
}

t_stream	stream_stdout(void)
{
	static const t_file	stdout = STDOUT;

	return (file_to_stream((t_file *)&stdout));
}

t_stream	stream_stderr(void)
{
	static const t_file	stderr = STDERR;

	return (file_to_stream((t_file *)&stderr));
}
