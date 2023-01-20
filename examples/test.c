/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:13:45 by tvo               #+#    #+#             */
/*   Updated: 2023/01/17 16:32:44 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int sum(int num, ...)
{
	int sum = 0;
	int i = 0;
	va_list args;

	va_start(args, num);
	while (i < num)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}

void printstr(int num, ...)
{
	int i = 0;
	char *ptr;

	va_list args;
	va_start(args, num);
	while (i < num)
	{
		ptr = va_arg(args, char *);
		printf("%s----\n", ptr);
	}
	va_end(args);
}

int main()
{
	int res = sum(3, 4, 3, 5, 6);
	// printf("-----value of res: %d-----", res);
	printstr(4, "black.", "hole", "student", "hello!");
}
