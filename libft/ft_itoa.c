/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:02:34 by tvo               #+#    #+#             */
/*   Updated: 2023/01/08 17:51:18 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int nb)
{
	size_t	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		count++;
	while (nb)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len_nb;
	char	*ptr;
	long	nb;

	len_nb = ft_len(n);
	nb = n;
	ptr = (char *)malloc(sizeof(char) * (len_nb + 1));
	if (!ptr)
		return (NULL);
	ptr[len_nb--] = '\0';
	if (nb == 0)
		ptr[0] = 48;
	if (nb < 0)
	{
		ptr[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		ptr[len_nb] = (nb % 10) + '0';
		nb /= 10;
		len_nb--;
	}
	return (ptr);
}
// int	main()
// {
// 	char	*s;

// 	s = ft_itoa(-2147483648);
// 	printf("%s", s);
// 	free(s);
// 	return (0);
// }
