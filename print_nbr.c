/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:13:20 by asmaili           #+#    #+#             */
/*   Updated: 2025/11/30 08:27:24 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

/*----------util--------*/
char	*ft_revstr(char *str)
{
	int		i;
	int		len;
	char	c;

	i = 0;
	if (str[0] == '-')
		i++;
	len = 0;
	while (str[len])
		len++;
	len -= 1;
	while (i < len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
	return (str);
}

/*------------print_signed_number-----------------*/
static char	*create_nb_buf_signed(long nb, int nbase)
{
	char	*nbstr;
	int		size;

	size = 0;
	if (nb < 0 || nb == 0)
		size += 1;
	while (nb != 0)
	{
		nb = nb / nbase;
		size += 1;
	}
	nbstr = malloc(sizeof(char) * (size + 1));
	if (!nbstr)
		return (0);
	return (nbstr);
}

int	print_signed_nbr_base(long nb, char *base)
{
	char	*nbstr;
	int		nbase;
	int		i;

	nbase = ft_strlen(base);
	nbstr = create_nb_buf_signed(nb, nbase);
	i = 0;
	if (nb < 0)
	{
		nbstr[0] = '-';
		i++;
		nb *= -1;
	}
	if (nb == 0)
		nbstr[i++] = base[0];
	while (nb)
	{
		nbstr[i++] = base[nb % nbase];
		nb /= nbase;
	}
	nbstr[i] = '\0';
	return (print_str(ft_revstr(nbstr), FREE));
}

/*---------------------print_unsigned_number-----------------*/
static char	*create_nb_buf_unsigned(unsigned long nb, int nbase)
{
	char	*nbstr;
	int		size;

	size = 0;
	if (nb == 0)
		size += 1;
	while (nb != 0)
	{
		nb = nb / nbase;
		size += 1;
	}
	nbstr = malloc(sizeof(char) * (size + 1));
	if (!nbstr)
		return (0);
	return (nbstr);
}

int	print_unsigned_nbr_base(unsigned long nb, char *base)
{
	char	*nbstr;
	int		nbase;
	int		i;

	i = 0;
	nbase = ft_strlen(base);
	nbstr = create_nb_buf_unsigned(nb, nbase);
	if (nb == 0)
		nbstr[i++] = base[0];
	while (nb)
	{
		nbstr[i++] = base[nb % nbase];
		nb /= nbase;
	}
	nbstr[i] = '\0';
	return (print_str(ft_revstr(nbstr), FREE));
}
