/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:27:55 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/24 02:41:58 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_H
# define FILES_H

# include <io/streams.h>
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
t_size			file_write(t_file file, t_ptr buffer, t_size len);
t_size			file_read(t_file file, t_ptr buffer, t_size len);
void			file_close(t_file file);
t_size			file_get_len(t_file file);
t_stream		file_to_stream(t_file *f);

#endif // FILES_H
