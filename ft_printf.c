/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 05:49:02 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/01 05:52:41 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char format, va_list *args)
{
	if (format == 'c')
		return (print_char(va_arg(*args, int)));
	if (format == 's')
		return (print_str(va_arg(*args, char *), NOT_FREE));
	if (format == 'p')
		return (print_addr(va_arg(*args, void *)));
	if (format == 'd' || format == 'i')
		return (print_signed_nbr_base(va_arg(*args, int), BASE_10));
	if (format == 'u')
		return (print_unsigned_nbr_base(va_arg(*args, unsigned int), BASE_10));
	if (format == 'x')
		return (print_unsigned_nbr_base(va_arg(*args, unsigned int), BASE_16L));
	if (format == 'X')
		return (print_unsigned_nbr_base(va_arg(*args, unsigned int), BASE_16U));
	if (format == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
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
			i += 1;
			init_count = count;
			count += handle_format(format[i++], &args);
		}
		else
		{
			print_char(format[i++]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
