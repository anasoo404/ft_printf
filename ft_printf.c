/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:10:03 by asmaili           #+#    #+#             */
/*   Updated: 2025/11/23 23:24:39 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_flag(char c)
{
	if (c == '')
}
int ft_printf(const char *format, ...)
{

	va_list list;

	va_start(list, format);
	while (*format && *format )
	va_end(list);
}
