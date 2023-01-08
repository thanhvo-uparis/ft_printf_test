/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:54:47 by tvo               #+#    #+#             */
/*   Updated: 2023/01/08 18:08:50 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
#include <inttypes.h>

int	ft_format(va_list argptr, const char format);
int	ft_printf(const char *str, ...);
int	ft_conversion_char(int c);
// conversion string
void	ft_putstr(char *str);
int	ft_conversion_str(char *str);
// conversion number
int	ft_conversion_nbr(int nb);

// conversion unsigned
int	ft_conversion_unsigned(unsigned int n);

// conversion hexadecimal
int	ft_conversion_hexa(unsigned int nb, const char format);
// conversion percent
int	ft_conversion_percent();
// conversion ptr
int	ft_conversion_ptr(unsigned long long ptr);

#endif
