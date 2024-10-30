/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mmap_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:29:07 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/30 16:10:47 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MMAP_UTILS_H
# define FT_MMAP_UTILS_H

# include <types.h>

typedef struct s_mmap_params
{
	t_ptr		addr;
	t_size		len;
	t_fd		fd;
	t_offset	off;
}				t_mmap_params;

typedef enum e_map_protection
{
	MAP_PROT_READ = 0x1,
	MAP_PROT_WRITE = 0x2,
	MAP_PROT_EXEC = 0x4,
	MAP_PROT_NONE = 0x0,
}				t_map_protection;

typedef enum e_map_flags
{
	MAP_FLAG_SHARED = 0x01,
	MAP_FLAG_PRIVATE = 0x02,
	MAP_FLAG_ANONYMOUS = 0x20,
}				t_map_flags;

#endif // FT_MMAP_FLAGS_H
