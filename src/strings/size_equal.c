/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_equal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:13:46 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 19:15:26 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

bool	string_size_equal(t_string a, t_string b, t_size len)
{
	t_size	i;

	i = 0;
	if (a.len < len)
		len = a.len;
	if (b.len < len)
		len = b.len;
	while (a.ptr[i] == b.ptr[i] && i < len)
		i++;
	return (i == a.len);
}
