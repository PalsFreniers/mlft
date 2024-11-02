/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:01:26 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 21:41:38 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"
#include <libft.h>

static t_size	string_split_get_word_count(t_string hay, t_string needle)
{
	t_size	i;
	t_isize	tmp;

	i = 0;
	tmp = string_find(hay, needle);
	while (tmp >= 0)
	{
		if (tmp != 0)
			i++;
		hay = string_substr(hay, tmp + needle.len, hay.len - (tmp
					+ needle.len));
		tmp = string_find(hay, needle);
	}
	if (string_equal(hay, needle))
		return (0);
	return (i);
}

static void	string_split_populate(t_string *strs, t_string hay, t_string needle)
{
	t_size	i;
	t_isize	tmp;

	i = 0;
	tmp = string_find(hay, needle);
	while (tmp >= 0)
	{
		if (tmp != 0)
		{
			strs[i] = string_substr(hay, 0, tmp);
			i++;
		}
		hay = string_substr(hay, tmp + needle.len, hay.len - (tmp
					+ needle.len));
		tmp = string_find(hay, needle);
	}
}

t_string	*string_split(t_allocator *alloc, t_string str, t_string other,
		t_size *out_size)
{
	t_string	*ret;

	*out_size = string_split_get_word_count(str, other);
	if (*out_size == 0)
		return (NULL);
	ret = allocator_malloc(alloc, *out_size, sizeof(t_string));
	if (ret != NULL)
		string_split_populate(ret, str, other);
	return (ret);
}
