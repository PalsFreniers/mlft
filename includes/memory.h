/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:18:49 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/29 07:21:42 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include <types.h>

t_ptr	ft_bzero(t_ptr ptr, t_size size);
t_ptr	ft_memset(t_ptr ptr, t_size len, t_u8 val);
t_ptr	ft_memcopy(t_ptr dest, t_ptr src, t_size len);
t_ptr	ft_memmove(t_ptr dest, t_ptr src, t_size len);

#endif // MEMORY_H
