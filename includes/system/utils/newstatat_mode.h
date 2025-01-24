/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newstatat_mode.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:12:20 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/24 22:36:43 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWSTATAT_MODE_H
# define NEWSTATAT_MODE_H

typedef enum e_newstatat_mode
{
	NEWSTATAT_EMPTY_PATH = 0x1000,
	NEWSTATAT_NO_AUTOMOUNT = 0x800,
	NEWSTATAT_SYMLINK_FOLLOW = 0x400,
	NEWSTATAT_SYMLINK_NOFOLLOW = 0x100,
}	t_newstatat_mode;

#endif // NEWSTATAT_MODE_H
