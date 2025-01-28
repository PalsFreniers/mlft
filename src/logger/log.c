/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:23:28 by tdelage           #+#    #+#             */
/*   Updated: 2025/01/28 17:45:05 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#ifdef COLORED

static t_cstr	get_cstr_from_level(t_log_level lv)
{
	if (lv == LOG_DEBUG)
		return (BLUE BOLD "[DEBUG]" RESET);
	if (lv == LOG_INFO)
		return (GREEN BOLD "[INFO]" RESET);
	if (lv == LOG_WARN)
		return (YELLOW BOLD "[WARNING]" RESET);
	if (lv == LOG_ERROR)
		return (RED BOLD "[ERROR]" RESET);
	if (lv == LOG_FATAL)
		return (RED BOLD "[FATAL]" RESET);
	return (MAGENTA BOLD "[???]" RESET);
}

#else // COLORED

static t_cstr	get_cstr_from_level(t_log_level lv)
{
	if (lv == LOG_DEBUG)
		return ("[DEBUG]");
	if (lv == LOG_INFO)
		return ("[INFO]");
	if (lv == LOG_WARN)
		return ("[WARNING]");
	if (lv == LOG_ERROR)
		return ("[ERROR]");
	if (lv == LOG_FATAL)
		return ("[FATAL]");
	return ("[???]");
}

#endif // COLORED

void	logger_logv(t_log_level lvl, const t_cstr fmt, va_list lst)
{
	t_file		f;
	t_stream	s;
	t_time		t;

	f = STDERR;
	s = file_to_stream(&f);
	ft_printf(&s, get_cstr_from_level(lvl));
	t = time_get_local();
	ft_printf(&s, " %d/%d/%d-%d:%d:%d => ", t.day, t.month, t.year, t.hours,
		t.minutes, t.seconds);
	ft_vprintf(&s, fmt, lst);
	ft_printf(&s, "\n");
}

void	logger_log(t_log_level lvl, const t_cstr fmt, ...)
{
	va_list	lst;

	va_start(lst, fmt);
	logger_logv(lvl, fmt, lst);
	va_end(lst);
}
