/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelage <tdelage@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:45:25 by tdelage           #+#    #+#             */
/*   Updated: 2024/11/01 16:04:12 by tdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

# include <types.h>

typedef enum e_strng_error
{
	STRING_SUCCESS,
	STRING_ITERATOR_INVALID,
	STRING_ITERATOR_OVERFLOW,
	STRING_ITERATOR_UNDERFLOW,
}					t_string_error;

t_string_error		string_errno(bool set, t_string_error err);
t_cstr				string_error_to_cstr(t_string_error err);

typedef struct s_string
{
	t_cstr			ptr;
	t_size			len;
	bool			unowned;
}					t_string;

typedef struct s_string_iterator
{
	t_string		*data;
	t_size			off;
}					t_string_iterator;

t_string			string_new_with_capacity(t_size capacity);
t_string			string_new(t_cstr str, t_size len);
t_string			string_new_u(t_cstr str, t_size len);
t_string			string_new_cstr(t_cstr str);
t_string			string_new_u_cstr(t_cstr str);

void				string_destroy(t_string *str);

t_string			str_copy(t_string str);

t_cstr				str_to_cstr(t_string str);

void				string_append(t_string *str, t_string other);
void				string_erase(t_string *str, t_size start, t_size len);
t_isize				string_find(t_string *str, t_string other);
t_string			*string_split(t_string *str, t_string delim);
bool				string_equal(t_string a, t_string b);
bool				string_size_equal(t_string a, t_string b, t_size len);

t_string_iterator	string_begin(t_string *str);
t_string_iterator	string_end(t_string *str);

bool				string_iterator_equal(t_string_iterator a,
						t_string_iterator b);
void				string_iterator_peek(t_string_iterator a, t_size offset);
void				string_iterator_inc(t_string_iterator a);
void				string_iterator_dec(t_string_iterator a);

#endif // STRINGS_H
