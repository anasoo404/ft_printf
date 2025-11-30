/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:13:20 by asmaili           #+#    #+#             */
/*   Updated: 2025/11/30 02:56:39 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// gere les decimaux
int	print_nbr_base(int nb, char *base)
{
	long	num;
	int		nbase;

	num = nb;
	nbase = ft_strlen(base);
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (nb > nbase - 1)
		print_nbr_base(nb / nbase, base);
	return (print_char(base[nb % nbase]));
}
