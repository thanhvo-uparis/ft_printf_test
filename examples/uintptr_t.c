/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uintptr_t.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:01:45 by tvo               #+#    #+#             */
/*   Updated: 2023/01/17 21:16:23 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
	void *ptr;
	int a;
	int *p_int;
	uintptr_t ptr_val;

	a = 42;
	ptr = &a;
	p_int = (int *)ptr;
	ptr_val = (uintptr_t)ptr;
	printf("adresse1 de a: %p\n", &p_int);
	printf("adresse2 de a: %" PRIuPTR "\n", ptr_val);
}
