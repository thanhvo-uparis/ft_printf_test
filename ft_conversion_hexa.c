/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:53:11 by tvo               #+#    #+#             */
/*   Updated: 2023/01/08 18:09:15 by tvo              ###   ########.fr       */
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

int	ft_conversion_hexa(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_conversion_hexa(nb / 16, format);
		ft_conversion_hexa(nb % 16, format);

	}
	else if (nb > 0 && nb <= 9)
		ft_putchar_fd((nb + '0'), 1);
	else
	{
		if (format == 'X')
			ft_putchar_fd((nb - 10 + 'A'), 1);
		else if (format == 'x')
			ft_putchar_fd((nb - 10 + 'a'), 1);
	}
	return (ft_len_hex(nb));
}

// int main()
// {
// 	printf("\n%d", ft_conversion_hexa(4019, 'x'));
// }
