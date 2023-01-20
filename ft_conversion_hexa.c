/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:53:11 by tvo               #+#    #+#             */
/*   Updated: 2023/01/20 17:02:11 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_len_hex(unsigned int nb)
{
	int	count;

	count = 0;
	while (nb)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

void	ft_printhexa(const char format, char res[], int *i)
{
	while (*i >= 0)
	{
		if (format == 'X' && res[*i] > '9')
		{
			ft_putchar_fd(res[*i] - 32, 1);
			(*i)--;
		}
		else
		{
			ft_putchar_fd(res[*i], 1);
			(*i)--;
		}
	}
}

int	ft_conversion_hexa(unsigned int n, const char format)
{
	char	res[100];
	int		i;
	int		nb;

	i = 0;
	nb = n;
	while (nb >= 16)
	{
		res[i] = "0123456789abcdef"[nb % 16];
		nb /= 16;
		i++;
	}
	res[i] = "0123456789abcdef"[nb];
	ft_printhexa(format, res, &i);
	return (ft_len_hex(n));
}

// int main()
// {
// 	printf("\n%d", ft_conversion_hexa(27, 'X'));
// }
