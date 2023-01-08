/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:52:10 by tvo               #+#    #+#             */
/*   Updated: 2023/01/08 18:15:25 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_conversion_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list argptr, const char format)
{
	int print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_conversion_char(va_arg(argptr, int));
	else if (format == 's')
		print_length += ft_conversion_str(va_arg(argptr, char *));
	else if (format == 'd' || format == 'i')
		print_length += ft_conversion_nbr(va_arg(argptr, int));
	else if (format == 'u')
		print_length += ft_conversion_unsigned(va_arg(argptr, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_conversion_hexa(va_arg(argptr, unsigned int), format);
	else if (format == '%')
		print_length += ft_conversion_percent();
	else if (format == 'p')
		print_length += ft_conversion_ptr(va_arg(argptr, unsigned long long));
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int i;
	int print_length;
	va_list	args;
	va_start(args, str);

	i = 0;
	print_length = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length = ft_format(args, str[++i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (print_length);
}

int	main()
{
	char i = 'h';
	char x[] = "back hole &&";
	int j = 57103;
	int u = 256;
	int hexa = 4019;

	int res = ft_printf("Coucou %c %s %d %u\n", i, x, j, u);
	int res2 = printf("Coucou %c %s %d %u %X\n", i, x, j, u, hexa);
}
