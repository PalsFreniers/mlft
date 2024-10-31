/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstrrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:47:15 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/31 16:05:30 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_cstr	ft_cstrrchr(t_cstr s, char c)
{
	t_size	i;

	i = ft_cstrlen(s);
	while (i >= 0 && s[i] != c)
		i--;
	return ((t_cstr)((t_uptr)(s + i) * (s[i] == c)));
}
