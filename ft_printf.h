/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:09:32 by asmaili           #+#    #+#             */
/*   Updated: 2025/11/30 02:55:22 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FLAG_ZERO (1 << 0)
# define FLAG_MINUS (1 << 1)
# define FLAG_PLUS (1 << 2)
# define FLAG_SPACE (1 << 3)
# define FLAG_HASH (1 << 4)

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	handle_format(char *format, int *i, va_list *args);
int	handle_flags(char *format, int *i, va_list *args);
int	ft_printf(const char *format, ...);

int	print_addr(void *ptr);
int	print_char(char c);
int	print_nbr_base(int nb, char *base);
int	ft_strlen(char *str);
int	print_str(char *str);

#endif
