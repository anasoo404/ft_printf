/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 01:17:00 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/01 04:37:50 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str, int to_free)
{
	int	count;

	if (!str)
		return (write(1, "(null)", 6));
	count = write(1, str, ft_strlen(str));
	if (to_free)
		free(str);
	return (count);
}
