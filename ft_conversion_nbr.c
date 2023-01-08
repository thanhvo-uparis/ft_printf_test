/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_nbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:43:39 by tvo               #+#    #+#             */
/*   Updated: 2023/01/08 18:09:00 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_conversion_nbr(int nb)
{
	int		len;
	char	*str;

	str = ft_itoa(nb);
	len = ft_conversion_str(str);
	free(str);
	return (len);
}
