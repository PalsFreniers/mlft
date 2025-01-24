/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cassert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 05:06:36 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/09 05:29:10 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_cassert(bool condition, t_cstr message, t_exit_code code)
{
	t_file		f;
	t_stream	err;

	f = STDERR;
	err = file_to_stream(&f);
	ft_stream_cassert(condition, message, &err, code);
}
