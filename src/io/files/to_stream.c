/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_stream.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:14:50 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 15:19:50 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static t_size	file_read_wrap(t_ptr buff, t_size size, t_ptr instance)
{
	return (file_read(*(t_file *)instance, buff, size));
}

static t_size	file_write_wrap(t_ptr buff, t_size size, t_ptr instance)
{
	return (file_write(*(t_file *)instance, buff, size));
}

static void	file_close_wrap(t_ptr instance)
{
	file_close(*(t_file *)instance);
}

t_stream	file_to_stream(t_file *f)
{
	return ((t_stream){
		.read = file_read_wrap,
		.write = file_write_wrap,
		.end = file_close_wrap,
		.instance = f,
	});
}
