/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_buffer.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:03:08 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/24 21:01:52 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STAT_BUFFER_H
# define FT_STAT_BUFFER_H

# include <system/utils/timespec_struct.h>
# include <types.h>

typedef struct s_stat
{
	t_u64		device;
	t_u64		inode;
	t_u32		mode;
	t_size		link_number;
	t_u32		uid;
	t_u32		gid;
	t_u64		rdevice;
	t_size		size;
	t_size		block_size;
	t_size		block_number;
	t_timespec	last_access;
	t_timespec	last_modif;
	t_timespec	last_status;
}				t_stat;

#endif // FT_STAT_BUFFER_H
