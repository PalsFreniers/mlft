/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 01:33:46 by tdelage           #+#    #+#             */
/*   Updated: 2025/02/08 02:07:53 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <types.h>

typedef struct s_list_node
{
	struct s_list_node	*next;
	t_ptr				data;
}						t_list_node;

typedef struct s_list
{
	t_list_node			*head;
	t_list_node			*tail;
	t_list_node			*arr;
	t_size				len;
	t_size				capacity;
}						t_list;

t_list					list_new(void);
t_list					list_new_with_capacity(t_size capacity);

#endif // LIST_H
