/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:03:14 by tvo               #+#    #+#             */
/*   Updated: 2023/01/20 15:42:49 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_printhexa(unsigned int nb, char format)
{
	char *hexa = "0123456789abcdef";
	int res[100];
	int i;

	i = 0;
	while (nb >= 16)
	{
		res[i] = hexa[nb % 16];
		nb /= 16;
		i++;
	}
	res[i] = hexa[nb];
	while (i >= 0)
	{
		if (format == 'X' && res[i] > 57)
		{
			ft_putchar(res[i] - 32);
			i--;
		}
		else
		{
			ft_putchar(res[i]);
			i--;
		}
	}
}

int main()
{
	// char *hexa = "0123456789abcdef";
	// printf("%c", hexa[15]);
	ft_printhexa(479, 'x');
}
