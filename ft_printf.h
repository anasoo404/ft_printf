/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:09:32 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/01 05:05:00 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FLAG_ZERO (1 << 0)
# define FLAG_MINUS (1 << 1)
# define FLAG_PLUS (1 << 2)
# define FLAG_SPACE (1 << 3)
# define FLAG_HASH (1 << 4)

# define NOT_FREE 0
# define FREE 1

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);

/*utils*/
int		ft_strlen(char *str);
char	*ft_str_range(char *stock, int start, int end);
int		my_atoi(char *nbr);

/*handle_format*/
int		handle_format(char *format, int *i, va_list *args);

/*handle_flags*/
int		handle_flags(char *format, int *i, va_list *args);
int		get_flag(char *format, int *i, int *flag);
int		get_width(char *format, int *i);
int		apply_flags(char *format, int *i, int *flag, int width);

/*print*/
int		print_addr(void *ptr);
int		print_char(int c);
int		print_unsigned_nb_base(unsigned long nb, char *base);
int		print_signed_nb_base(long nb, char *base);
int		print_str(char *str, int to_free);

#endif
