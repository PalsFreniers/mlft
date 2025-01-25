/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syscalls.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 05:41:12 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/25 00:18:57 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYSCALLS_H
# define SYSCALLS_H

# include <types.h>

// system calls utils
# include <system/calls/call_numbers.h>
# include <system/utils/fdat.h>
# include <system/utils/ft_mmap_utils.h>
# include <system/utils/ft_stat_buffer.h>
# include <system/utils/newstatat_mode.h>
# include <system/utils/open_mode.h>

t_uptr	ft_syscall(t_call_number number,
			...) __attribute__((warn_unused_result));
t_isize	ft_read(t_fd fd, t_ptr ptr,
			t_size size) __attribute__((warn_unused_result));
t_isize	ft_write(t_fd fd, t_ptr ptr,
			t_size size) __attribute__((warn_unused_result));
t_fd	ft_open(t_cstr path, t_open_mode mode,
			t_file_permissions perm) __attribute__((warn_unused_result));
void	ft_close(t_fd fd);
bool	ft_fstat(t_fd file, t_stat *buf) __attribute__((deprecated("error")));
t_ptr	ft_mmap(t_mmap_params p, t_map_protection prot,
			t_map_flags flags) __attribute__((warn_unused_result));
void	ft_munmap(t_mmap_params p);
void	ft_exit(t_exit_code exit_code) __attribute__((noreturn));
bool	ft_newstatat(t_fd fd, t_cstr path, t_stat *buf,
			t_newstatat_mode mode) __attribute__((warn_unused_result));
bool	ft_newfstat(t_fd fd, t_stat *buf) __attribute__((warn_unused_result));

#endif // SYSCALLS_H
