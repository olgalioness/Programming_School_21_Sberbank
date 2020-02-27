/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:43:51 by klekisha          #+#    #+#             */
/*   Updated: 2019/01/31 16:17:46 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int		main(void)
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;

	a = 3;
	b = 7;
	ptr1 = &a;
	ptr2 = &b;
	ft_swap(ptr1, ptr2);
	printf("d03e02 output: %d, %d", a, b);
	return (0);
}
