/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:36:39 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 20:50:03 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_isize	string_find(t_string str, t_string other)
{
	t_isize	i;

	i = 0;
	if (other.len > str.len)
		return (-1);
	if (string_equal(str, other))
		return (0);
	while (i <= (t_isize)str.len - (t_isize)other.len)
	{
		if (string_equal(string_new_u(str.ptr + i, other.len), other))
			return (i);
		i++;
	}
	return (-1);
}
