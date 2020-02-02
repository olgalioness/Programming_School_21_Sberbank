/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:37:20 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/20 17:37:20 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |	ex01/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_range.c    	    		|
// | Allowed functions: |	malloc       				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Создайте функцию ft_range, которая возвращает массив типа int. Этот int массив должен содержать
//    в себе все значения между min и max.
//    > Create a function ft_range which returns an array ofints. This int array should contain all
//      values between min and max.
// 2. Min. включено - max. исключено.
//    > Min included - max excluded.
// 3. Here’s how it should be prototyped: int *ft_range(int min, int max);
// 4. Если min значение выше или равно max значению, null указатель должен вернуться.
//    > If min´value is greater or equal to max’s value, a null pointer should be returned.

// Он должен выделить (с malloc()) массив типа int, заполнив его последовательными значениями,
// которые начинаются с началом и заканчиваются концом (включая само начало и сам конец),
// потом возвращая указать нна первое значение массива.
//
// Examples:
// - c (1, 3) мы вернем массив содержащий в себе 1, 2 и 3
// - c (-1, 2) мы вернем массив содержащий в себе -1, 0, 1 и 2
// - c (0, 0) мы вернем массив содержащий в себе 0.
// - с (0, -3) мы вернем массив содержащий в себе (0, -1, -2 и -3)

/* -------------------------------------------------------------------------- */
/* tests                                                                      */
/* -------------------------------------------------------------------------- */
#include <stdio.h>
#include <assert.h>
#include <string.h>

/* -------------------------------------------------------------------------- */
/* ft_strdup                                                                  */
/* -------------------------------------------------------------------------- */
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *dest;
	int i;
	int len;

	if (min >= max)				// Если min значение выше или равно max значению, null указатель должен вернуться.
	{
		return (0);
	}
	len = max - min;			// Высчитываем кол-во байт, которые надо выделить
	dest = (int *)malloc(len);	// Объявляем переменную, с выделенной областью определенного размера
	i = 0;
	while (i < len)				// Пока i меньше len (выделенного числа байтов)
	{								// min.-1
		dest[i] = min + i;			// dest[i.0] = -1 + i.0 => -1	|n|		dest[i.1~0] = -1 + 1
		i++;						// i = 0						|n|		i = 1
	}
	return (dest);				// Возвращаем dest
}

/* -------------------------------------------------------------------------- */
/* tests                                                                      */
/* -------------------------------------------------------------------------- */
int	main(void)
{
	int test_arr1[] = {3, 4, 5, 6, 7};

	assert(memcmp(test_arr1, ft_range(3, 8), sizeof(test_arr1))==0);
	assert(ft_range(3, 3)==0);

	int *tab;

	tab = ft_range(0, 5);
	printf("%d", tab[5]);
	free(tab);

	return (0);
}

// int	main(void)
// {
// 	int *t = NULL;

// 	t = ft_range(0, 0);
// 	if (t)
// 		printf("KO\n");
// 	else
// 		printf("OK\n");

// 	t = ft_range(10, 10);
// 	if (t)
// 		printf("KO\n");
// 	else
// 		printf("OK\n");

// 	t = ft_range(-42, 42);
// 	if (!t)
// 		printf("KO\n");
// 	else
// 	{
// 		for (int i = 0; i < 42 - -42; i++)
// 			printf("%d,", t[i]);
// 		printf("\n");
// 		free(t);
// 	}

// 	t = ft_range(-200, -100);
// 	if (!t)
// 		printf("KO\n");
// 	else
// 	{
// 		for (int i = 0; i < -100 - -200; i++)
// 			printf("%d,", t[i]);
// 		printf("\n");
// 		free(t);
// 	}

// 	t = ft_range(30, 20);
// 	if (t)
// 		printf("KO\n");
// 	else
// 		printf("OK\n");

// 	t = ft_range(42, 43);
// 	if (!t)
// 		printf("KO\n");
// 	else
// 	{
// 		printf("%d", t[0]);
// 		printf("\n");
// 		free(t);
// 	}
// 	return (0);
// }