/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:52:06 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 17:50:39 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <errno/errno.h>
# include <stddef.h>
# include <system/calls/call_numbers.h>
# include <system/utils/ft_mmap_utils.h>
# include <system/utils/open_mode.h>
# include <types.h>

// syscalls
t_uptr	ft_syscall(t_call_number number,
			...) __attribute__((warn_unused_result));
t_isize	ft_read(t_fd fd, t_ptr ptr,
			t_size size) __attribute__((warn_unused_result));
t_isize	ft_write(t_fd fd, t_ptr ptr,
			t_size size) __attribute__((warn_unused_result));
t_fd	ft_open(t_cstr str, t_open_mode mode,
			t_file_permissions perm) __attribute__((warn_unused_result));
void	ft_close(t_fd fd);
t_ptr	ft_mmap(t_mmap_params p, t_map_protection prot,
			t_map_flags flags) __attribute__((warn_unused_result));
void	ft_munmap(t_mmap_params p);
void	ft_exit(t_exit_code exit_code) __attribute__((noreturn));

// errno
t_errno	ft_errno(bool set, t_errno value);

#endif // LIBFT_H
