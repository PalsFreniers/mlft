/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 23:57:16 by tdelage           #+#    #+#             */
/*   Updated: 2025/05/15 00:16:57 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"
#include <libft.h>

t_string	random_next_string(t_random *rand, t_u64 len)
{
	t_string	str;

	if (len == 0)
		return (string_zero());
	str = string_new_with_capacity(len);
	if (string_errno(false, 0) != STRING_SUCCESS)
		return (string_zero());
	while (len--)
		string_push_back(&str, random_urand(rand, ' ', 126));
	return (str);
}
