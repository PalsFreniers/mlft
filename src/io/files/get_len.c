/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 02:42:25 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/24 22:12:15 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_size	file_get_len(t_file file)
{
	t_stat	buf;

	if (!ft_newfstat(file, &buf))
		return (0);
	return (buf.size);
}
