/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstrschr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:06:37 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/31 16:13:08 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_cstr	ft_cstrschr(t_cstr s, t_cstr chars)
{
	t_cstr	tmp;

	while (*chars != '\0')
	{
		tmp = ft_cstrchr(s, *chars);
		if (tmp != NULL)
			return (tmp);
		chars++;
	}
	return (NULL);
}
