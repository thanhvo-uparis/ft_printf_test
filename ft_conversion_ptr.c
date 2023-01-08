/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 00:25:48 by tvo               #+#    #+#             */
/*   Updated: 2023/01/08 18:09:26 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_len_ptr(unsigned long long nb)
{
	int len;

	len = 0;
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_conversion_ptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr >= 16)
	{
		ft_conversion_ptr(ptr / 16);
		ft_conversion_ptr(ptr % 16);
	}
	else if (ptr > 0 && ptr <= 9)
	{
		write(1, ptr + "0", 1);
		print_length++;
	}
	else
		ft_putchar_fd(ptr - 10 + 'a', 1);
	print_length +=  ft_len_ptr(ptr);
	return (print_length);
}

// int main()
// {
// 	void *ptr;

// 	int a = 4019;
// 	ptr = &a;
// 	printf("\n%d", ft_conversion_ptr(*ptr));
// }
