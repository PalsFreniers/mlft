/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logger.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:20:55 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/28 16:23:37 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	logger_debug(const t_cstr fmt, ...)
{
	va_list	lst;

	va_start(lst, fmt);
	logger_logv(LOG_DEBUG, fmt, lst);
	va_end(lst);
}

void	logger_info(const t_cstr fmt, ...)
{
	va_list	lst;

	va_start(lst, fmt);
	logger_logv(LOG_INFO, fmt, lst);
	va_end(lst);
}

void	logger_warning(const t_cstr fmt, ...)
{
	va_list	lst;

	va_start(lst, fmt);
	logger_logv(LOG_WARN, fmt, lst);
	va_end(lst);
}

void	logger_error(const t_cstr fmt, ...)
{
	va_list	lst;

	va_start(lst, fmt);
	logger_logv(LOG_ERROR, fmt, lst);
	va_end(lst);
}

void	logger_fatal(const t_cstr fmt, ...)
{
	va_list	lst;

	va_start(lst, fmt);
	logger_logv(LOG_FATAL, fmt, lst);
	va_end(lst);
	ft_exit(255);
}
