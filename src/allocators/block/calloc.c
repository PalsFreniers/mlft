/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:17:59 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 12:21:52 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_ptr	block_calloc(t_size elems, t_size sizes)
{
	t_ptr	ret;

	ret = block_malloc(elems, sizes);
	if (ret == NULL)
		return (NULL);
	return (ft_bzero(ret, elems * sizes));
}
