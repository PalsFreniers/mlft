/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loggerv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:20:55 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/28 16:24:43 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	logger_debugv(const t_cstr fmt, va_list lst)
{
	logger_logv(LOG_DEBUG, fmt, lst);
}

void	logger_infov(const t_cstr fmt, va_list lst)
{
	logger_logv(LOG_INFO, fmt, lst);
}

void	logger_warningv(const t_cstr fmt, va_list lst)
{
	logger_logv(LOG_WARN, fmt, lst);
}

void	logger_errorv(const t_cstr fmt, va_list lst)
{
	logger_logv(LOG_ERROR, fmt, lst);
}

void	logger_fatalv(const t_cstr fmt, va_list lst)
{
	logger_logv(LOG_FATAL, fmt, lst);
	ft_exit(255);
}
