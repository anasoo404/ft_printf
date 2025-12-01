/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:10:03 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/01 04:49:39by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char *format, int *i, va_list *args)
{
	if (format[*i] == 'c')
		return (print_char(va_arg(*args, int)));
	if (format[*i] == 's')
		return (print_str(va_arg(*args, char *), NOT_FREE));
	if (format[*i] == 'p')
		return (print_addr(va_arg(*args, void *)));
	if (format[*i] == 'd' || format[*i] == 'i')
		return (print_signed_nbr_base(va_arg(*args, int), "0123456789"));
	if (format[*i] == 'u')
		return (print_unsigned_nbr_base(va_arg(*args, unsigned int), "0123456789"));
	if (format[*i] == 'x')
		return (print_unsigned_nbr_base(va_arg(*args, unsigned int), "0123456789abcdef"));
	if (format[*i] == 'X')
		return (print_unsigned_nbr_base(va_arg(*args, unsigned int), "0123456789ABCDEF"));
	if (format[*i] == '%')
		return (write(1, "%", 1));
	*i += 1;
	return (0);
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		init_count;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			init_count = count;
			count += handle_flags(format, &i, &args);
			if (count > init_count &&)
			////////////?????????
		}
		else
		{
			ft_putchar(format[i++]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
