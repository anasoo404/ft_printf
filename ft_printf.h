/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:09:32 by asmaili           #+#    #+#             */
/*   Updated: 2025/11/24 11:07:27 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FLAG_ZERO (1 << 0)
# define FLAG_MINUS (1 << 1)
# define FLAG_PLUS (1 << 2)
# define FLAG_SPACE (1 << 3)
# define FLAG_HASH (1 << 4)

#include <stdarg.h> // pour va_list ,va_arg...
#include <stdlib.h> //---------- a voir si faut garder;;;
#include <unistd.h> // write
#include <stdint.h> // pour caster en uintptr_t

int	ft_printf(const char *format, ...);

#endif
