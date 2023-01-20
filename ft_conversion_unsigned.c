/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_unsigned.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:56:57 by tvo               #+#    #+#             */
/*   Updated: 2023/01/10 14:26:01 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_len(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_uitoa(unsigned int nb)
{
	char	*ptr;
	int		len;

	len = ft_len(nb);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	if (nb == 0)
	{
		ptr[0] = 48;
		ptr[1] = '\0';
		return (ptr);
	}
	ptr[len] = '\0';
	while (nb > 0)
	{
		ptr[--len] = (nb % 10) + 48;
		nb /= 10;
	}
	return (ptr);
}

int	ft_conversion_unsigned(unsigned int n)
{
	int		print_length;
	char	*str;

	str = ft_uitoa(n);
	print_length = ft_conversion_str(str);
	free(str);
	return (print_length);
}
