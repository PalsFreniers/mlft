/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timespec_struct.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:59:06 by tdelage           #+#    #+#             */
/*   Updated: 2025/02/05 19:08:23 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIMESPEC_STRUCT_H
# define TIMESPEC_STRUCT_H

# include <types.h>

typedef struct s_timespec
{
	t_u64	nano_secs;
	t_u64	secs;
}			t_timespec;

typedef struct s_timeval
{
	t_u64	secs;
	t_u64	micro_secs;
}			t_timeval;

#endif // TIMESPEC_STRUCT_H
