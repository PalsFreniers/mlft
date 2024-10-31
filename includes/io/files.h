/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:27:55 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/31 16:22:18 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_H
# define FILES_H

# include <stdarg.h>
# include <types.h>

typedef t_fd	t_file;

typedef enum e_std_files
{
	STDIN = 0,
	STDOUT = 1,
	STDERR = 2,
}				t_std_files;

t_file			file_open(t_cstr path, t_cstr flags);
void			file_write(t_file file, t_ptr buffer, t_size len);
void			file_read(t_file file, t_ptr buffer, t_size len);
void			file_close(t_file file);

void			file_printf(t_file, t_cstr fmt, ...);
void			file_vprintf(t_file, t_cstr fmt, va_list lst);

#endif // FILES_H
