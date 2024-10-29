/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_mode.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:06:44 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 14:54:57 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPEN_MODE_H
# define OPEN_MODE_H

# include <fcntl.h>

typedef enum e_open_mode
{
	OPEN_READ = 00,
	OPEN_WRITE = 01,
	OPEN_READ_WRITE = 02,
	OPEN_APPEND = 02000,
	OPEN_CREATE = 0100,
	OPEN_TRUNCATE = 01000,
	OPEN_NON_BLOCK = 04000,
}	t_open_mode;

typedef enum e_file_permissions
{
	PERM_OWNER_RWX = 0700,
	PERM_OWNER_RW_ = 0600,
	PERM_OWNER_R_X = 0500,
	PERM_OWNER_R__ = 0400,
	PERM_OWNER__WX = 0300,
	PERM_OWNER__W_ = 0200,
	PERM_OWNER___X = 0100,
	PERM_GROUP_RWX = 0070,
	PERM_GROUP_RW_ = 0060,
	PERM_GROUP_R_X = 0050,
	PERM_GROUP_R__ = 0040,
	PERM_GROUP__WX = 0030,
	PERM_GROUP__W_ = 0020,
	PERM_GROUP___X = 0010,
	PERM_OTHER_RWX = 0007,
	PERM_OTHER_RW_ = 0006,
	PERM_OTHER_R_X = 0005,
	PERM_OTHER_R__ = 0004,
	PERM_OTHER__WX = 0003,
	PERM_OTHER__W_ = 0002,
	PERM_OTHER___X = 0001,
	PERM_DEFAULT = 0644,
}	t_file_permissions;

#endif // OPEN_MODE_H
