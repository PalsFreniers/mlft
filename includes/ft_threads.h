/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_threads.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:50:30 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/14 14:37:44 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_THREADS_H
# define FT_THREADS_H

#include <types.h>

typedef int t_thread_id;
typedef t_any (*t_thread_method)(t_any data);

t_thread_id thread_create(t_thread_method method, t_any data);

#endif // FT_THREADS_H
