/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstrrschr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:12:39 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/31 16:20:37 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_cstr	ft_cstrrschr(t_cstr s, t_cstr chars)
{
	t_cstr	tmp;

	while (*chars != '\0')
	{
		tmp = ft_cstrrchr(s, *chars);
		if (tmp != NULL)
			return (tmp);
		chars++;
	}
	return (NULL);
}
