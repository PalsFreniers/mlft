/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   registers.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:20:53 by tdelage           #+#    #+#             */
/*   Updated: 2024/10/27 14:58:05 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REGISTERS_H
# define REGISTERS_H

# include <types.h>

typedef struct s_registers
{
	t_u64	rax;
	t_u64	rdi;
	t_u64	rsi;
	t_u64	rdx;
	t_u64	r10;
	t_u64	r8;
	t_u64	r9;
}			t_registers;

#endif // REGISTERS_H
