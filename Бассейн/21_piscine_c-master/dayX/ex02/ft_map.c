/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 11:15:58 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 12:45:31 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		decrease(int x)
{
	return (--x);
}

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *res;

	i = 0;
	res = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

void		my_test()
{
	int arr[] = {5, 4, 3, 2, 1};
	int *arr1 = ft_map(arr, 5, &decrease);
	for (int i = 0; i < 5; i++)
		printf("%d ", arr1[i]);
	printf("\n\n");
}

int inc_num(int n)
{
	return n + 5;
}

void g_test()
{
	int test1[] = {1,2,3,4,5};

	int* res = ft_map(test1, 5, inc_num);
	for (int i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	free(res);

	int test2[] = {-25,0,20,45};

	res = ft_map(test2, 3, inc_num);
	for (int i = 0; i < 3; i++)
		printf("%d,", res[i]);
	printf("\n");

	free(res);

	int test3[] = {5};

	res = ft_map(test3, 0, inc_num);
	for (int i = 0; i < 0; i++)
		printf("%d,", res[i]);
	printf("\n");
	
	free(res);

	//$expected = "6,7,8,9,10,\n-20,5,25,\n\n";

}

int main()
{
	my_test();
	g_test();
}
