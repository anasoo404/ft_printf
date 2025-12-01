/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:34:33 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/01 04:58:09by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_flag(char *format, int *i, int *flag)
{
	int	start;

	start = 0;
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
	return (0);
}

int	get_width(char *format, int *i)
{
	int	start;

	start = *i;
	while (format[*i] && format[*i] >= '0' && format [*i] <= '9')
		*i++;
	if (format[*i - 1] >= '0' && format[*i + 1] <= '9')
		return (my_atoi(ft_str_range(format, start, *i)));
	return (1);
}

static int	has_flag(int flag, int mask)
{
	return ((flag & mask) != 0);
}
int	apply_flags(char *format, int *i, int *flag, int width)
{
	int	count;

	count = 0;
	if (has_flag(flag, FLAG_SPACE) && !(has_flag(flag, FLAG_PLUS)))
		return (*flag &= ~(FLAG_SPACE), write(1, " ", 1));
	if (has_flag(flag, FLAG_PLUS) && (format[*i + 1] == 'd' || format[*i + 1] == 'i'))
		return (*flag &= ~(FLAG_PLUS), write(1, "+", 1));

	if (has_flag(flag, FLAG_ZERO) && !(has_flag(flag, FLAG_MINUS)) ||
		has_flag(flag, FLAG_SPACE) && !has_flag(flag, FLAG_PLUS))
	{/////////////////////////////////////fini handle flags
		while (width--)
		{
			if (has_flag(flag, FLAG_ZERO))
				count += write(1, "0", 1);
		}
		return (*flag &= ~(FLAG_ZERO), count);
	}
	*flag &= ~(FLAG_PLUS);

	if (has_flag(flag, FLAG_HASH))
}





