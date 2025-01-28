/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logger.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 03:21:04 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/28 15:26:46 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
# define LOGGER_H

# include <stdarg.h>
# include <types.h>

typedef enum e_log_level
{
	LOG_DEBUG,
	LOG_INFO,
	LOG_WARN,
	LOG_ERROR,
	LOG_FATAL,
}		t_log_level;

void	logger_log(t_log_level lvl, const t_cstr fmt, ...);
void	logger_logv(t_log_level lvl, const t_cstr fmt, va_list lst);

void	logger_debug(const t_cstr fmt, ...);
void	logger_info(const t_cstr fmt, ...);
void	logger_warning(const t_cstr fmt, ...);
void	logger_error(const t_cstr fmt, ...);
void	logger_fatal(const t_cstr fmt, ...) __attribute__((noreturn));

void	logger_debugv(const t_cstr fmt, va_list lst);
void	logger_infov(const t_cstr fmt, va_list lst);
void	logger_warningv(const t_cstr fmt, va_list lst);
void	logger_errorv(const t_cstr fmt, va_list lst);
void	logger_fatalv(const t_cstr fmt, va_list lst) __attribute__((noreturn));

#endif // LOGGER_H
