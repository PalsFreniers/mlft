/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errno_to_cstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:00:06 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 19:22:11 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_cstr	string_error_to_cstr(t_string_error err)
{
	if (err == STRING_SUCCESS)
		return ("Success");
	else if (err == STRING_ALLOC_ERROR)
		return ("Allocation Error");
	else if (err == STRING_ITERATOR_INVALID)
		return ("Invalid Iterator");
	else if (err == STRING_ITERATOR_OVERFLOW)
		return ("Iterator Overflow");
	else if (err == STRING_ITERATOR_UNDERFLOW)
		return ("Iterator Underflow");
	else if (err == STRING_NO_DESTROY_UNOWNED)
		return ("Unable To Destroy Unowned");
	else if (err == STRING_NO_DESTROY_UNOWNED)
		return ("Unable To Modify Unowned");
	return ("Unknown Error");
}
