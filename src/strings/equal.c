/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:11:31 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 19:15:23 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

bool	string_equal(t_string a, t_string b)
{
	t_size	i;

	i = 0;
	if (a.len != b.len)
		return (false);
	while (a.ptr[i] == b.ptr[i] && i < a.len)
		i++;
	return (i == a.len);
}
