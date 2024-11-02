/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:59:42 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/02 22:01:03 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_printf(t_stream *stream, const t_cstr fmt, ...) {
        va_list lst;
        va_start(lst, fmt);
        ft_vprintf(stream, fmt, lst);
        va_end(lst);
}
