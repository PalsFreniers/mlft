/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errno.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:02:25 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/24 22:08:04 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRNO_H
# define ERRNO_H

# include <stdbool.h>

typedef enum e_errno
{
	ERRNO_SUCCESS = 0,
	ERRNO_BAD_FD = -1,
	ERRNO_SYSTEM = -2,
	ERRNO_NULL_BUFFER = -3,
	ERRNO_NULL_CSTR = -3,
	ERRNO_ZERO_CAPACITY = -4,
	ERRNO_ALLOC_OVERSIZE = -5,
	ERRNO_FILE_FLAGS_UNKNOWN = -6,
}		t_errno;

t_errno	ft_errno(bool set, t_errno value);

#endif // ERRNO_H
