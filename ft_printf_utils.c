/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 09:29:20 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/01 05:54:03 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_range(char *stock, int start, int end)
{
	char	*str;
	int		i;

	if (start >= end)
		return (NULL);
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = stock[start++];
	str[i] = '\0';
	return (str);
}

int	my_atoi(char *nbr)
{
	int	res;

	res = 0;
	while (*nbr >= 0 && *nbr <= 9)
	{
		res = res * 10 + (*nbr - 48);
		nbr++;
	}
	free(nbr);
	return (res);
}
