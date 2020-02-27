/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 11:09:11 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 12:43:00 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print(int x)
{
	printf("%d ", x);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

void		my_test()
{
	int arr[] = {1, 2, 3, 4, 5};
	ft_foreach(arr, 5, &print);
}


void	putnbr(int n)
{
	printf("%d,", n);
}

void	g_test()
{
	int test1[] = {1,2,3,4,5};
	int test2[] = {-25,0,20,45};
	int test3[] = {5};
	
	ft_foreach(test1, 5, putnbr);
	printf("\n");
	ft_foreach(test2, 3, putnbr);
	printf("\n");
	ft_foreach(test3, 0, putnbr);
	printf("\n");

	//expected = "1,2,3,4,5,\n-25,0,20,\n\n";
}

int	main()
{
	my_test();
	g_test();
}
