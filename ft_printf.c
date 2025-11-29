/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:10:03 by asmaili           #+#    #+#             */
/*   Updated: 2025/11/24 11:40:45 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

parse_sequence(const char *format, int *i, va_list *data)
{
	//check avec handle_format.c
	while (format[*i] && ())
}
static int	print_sequence( *data, va_list args)
{
	int	nb_printed_char;


}

int ft_pustr(char *str)
{
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}
int	handle_format(char *format, int *i, va_list *args)
{
	if (format[*i] == 's')
		return (ft_put_str(va_arg(*args, char *)));
}
int ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	count =
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += handle_format(format, &i, &args);
			i++;
			parse_sequence(); // on incremente i dans le parsing
			count = print_sequence();
		}
		else
		{
			ft_putchar(format[i++]);
			count++;
		}
	}
	va_end(args);
	return (nb_printed_char);
}
