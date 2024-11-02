/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:06:48 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 18:09:36 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	string_destroy(t_string *str)
{
	if (str->unowned)
		return ((void)string_errno(true, STRING_NO_DESTROY_UNOWNED));
	block_free(str->ptr);
	ft_bzero(str, sizeof(t_string));
}
