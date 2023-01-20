/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_void.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:47:55 by tvo               #+#    #+#             */
/*   Updated: 2023/01/17 18:22:55 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a;
	void *ptr;
	int *p_int;

	a = 54;
	ptr = &a;
	p_int = (int *)ptr;
	printf("adresse of a: %p, value: %d et adresse via un pointeur: %p", &ptr, *p_int, &p_int);
}
