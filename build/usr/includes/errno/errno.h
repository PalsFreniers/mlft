/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errno.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:02:25 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 11:29:03 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRNO_H
# define ERRNO_H

typedef enum e_errno
{
	ERRNO_SUCCESS = 0,
	ERRNO_BAD_FD = -1,
	ERRNO_SYSTEM = -2,
	ERRNO_NULL_BUFFER = -3,
}	t_errno;

#endif // ERRNO_H
