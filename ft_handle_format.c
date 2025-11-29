/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:34:33 by asmaili           #+#    #+#             */
/*   Updated: 2025/11/29 07:07:15 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	has_flag(int flag, int mask)
{
	return (flag & mask != 0);
}
int	is_flag(char format)
{
	//check si c un des flags
	if ()
		return (FLAG_MINUS);
	if ()
	if ()
	if ()
}
int	handle_flags(char *format, int *i)
{
	int	flag;

	flag = 0;
	while (format[*i] && is_flag(format[*i]))
		flag |= is_flag(format[*i++]);
	return (flag);
}
void	apply_flags(va_list *args)
int	handle_conversion(char *format, int *i, va_list *args)
{
	int	flag;

	flag = handle_flags(format, *i);

}
