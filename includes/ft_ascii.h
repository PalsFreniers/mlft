/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:29:03 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 07:34:42 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ASCII_H
# define FT_ASCII_H

# include <stdbool.h>

bool	ft_is_ascii(char c);
bool	ft_is_print(char c);
bool	ft_is_alnum(char c);
bool	ft_is_alpha(char c);
bool	ft_is_digit(char c);
bool	ft_is_space(char c);
bool	ft_is_lower(char c);
bool	ft_is_upper(char c);

char	ft_to_lower(char c);
char	ft_to_upper(char c);

#endif // FT_ASCII_H
