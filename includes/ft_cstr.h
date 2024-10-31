/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstr.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:28:32 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/31 16:22:13 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CSTR_H
# define FT_CSTR_H

# include <types.h>

t_size	ft_cstrlen(t_cstr s);
t_size	ft_cstrclen(t_cstr s, char c);
t_cstr	ft_cstrchr(t_cstr s, char c);
t_cstr	ft_cstrrchr(t_cstr s, char c);
t_cstr	ft_cstrschr(t_cstr s, t_cstr chars);
t_cstr	ft_cstrrschr(t_cstr s, t_cstr chars);

#endif // FT_CSTR_H
