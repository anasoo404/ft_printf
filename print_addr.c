/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 05:45:12 by asmaili           #+#    #+#             */
/*   Updated: 2025/11/30 02:56:04 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_addr(void *ptr)
{
	uintptr_t	addr;
	int			count;

	count = 0;
	addr = (uintptr_t)ptr;
	count += print_str("0x");
	count += print_nbr(addr, "0123456789abcdef");
	return (count);
}
