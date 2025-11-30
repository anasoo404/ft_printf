/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_flags&format.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:34:33 by asmaili           #+#    #+#             */
/*   Updated: 2025/11/30 02:52:01 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	has_flag(int flag, int mask)
{
	return (flag & mask != 0);
}
static int	is_flag(char *format, int *i)
{
	if (format[*i] == '0')
		return (FLAG_ZERO);
	if (format[*i] == '-')
		return (FLAG_MINUS);
	if (format[*i] == '+')
		return (FLAG_PLUS);
	if (format[*i] == ' ')
		return (FLAG_SPACE);
	if (format[*i] == '#')
		return (FLAG_HASH);
	*i += 1;
}
int	handle_format(char *format, int *i, va_list *args)
{
	if (format[*i] == 'c')
		return (print_char(va_arg(*args, char)));
	if (format[*i] == 's')
		return (print_str(va_arg(*args, char *)));
	if (format[*i] == 'p')
		return (print_addr(va_arg(*args, void *)));
	if (format[*i] == 'd')
		return (print_nbr_base(va_arg(*args, double)));
	if (format[*i] == 'i')
	if (format[*i] == 'u')
	if (format[*i] == 'x')
	if (format[*i] == 'X')
	if (format[*i] == '%')
}

int	handle_flags(char *format, int *i, va_list *args)
{
	int	flag;

	flag = 0;
	while (format[*i] && is_flag(format[*i]))
		flag |= is_flag(format[*i], i);
	if (has_flag(flag, FLAG_ZERO))
	{
		while ()
	}
	if (has_flag(flag, FLAG_MINUS))

	if (has_flag(flag, FLAG_PLUS) && )
	if (has_flag(flag, FLAG_SPACE) && !(has_flag(flag, FLAG_PLUS)))
		return (write(1, " ", 1));
	if (has_flag(flag, FLAG_HASH))
	else
		return (handle)
}
