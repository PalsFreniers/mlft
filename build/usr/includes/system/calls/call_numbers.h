/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_numbers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 07:45:09 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 15:00:26 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALL_NUMBERS_H
# define CALL_NUMBERS_H

typedef enum e_call_number
{
	SYS_READ = 0,
	SYS_WRITE = 1,
	SYS_OPEN = 2,
	SYS_CLOSE = 3,
	SYS_MMAP = 9,
	SYS_MUNMAP = 11,
	SYS_EXIT = 60,
}	t_call_number;

#endif // CALL_NUMBERS_H
