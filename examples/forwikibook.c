/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forwikibook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:38:42 by tvo               #+#    #+#             */
/*   Updated: 2023/01/17 17:17:18 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	printargs(int num, ...)
{
	int count;
	int i = num;

	count = 0;
	va_list args;
	va_start(args, num);
	while (1)
	{
		printf("%d  ", i);
		i = va_arg(args, int);
		count++;
		if (!i)
			break ;
	}
	printf("\nNbr de element is %d", count);
	va_end(args);
	return (count);
}

int main(void)
{
   printargs(8, 4, 1, 5, 7, 24);
//    printargs(84, 51, -1);
//    printargs(-1);
//    printargs(1, -1);
   return 0;
}
