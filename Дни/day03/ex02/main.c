/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 03:17:27 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/08 03:17:27 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex02/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_swap.c                      |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, которая меняет местами значения двух переменных типа int, адреса которых можно задать в параметрах.
//
//    > Create a function that swaps the value of two integers whose addresses are enteredas parameters.
//
// 2. Here’s how it should be prototyped: void ft_swap(int *a, int *b);

// https://www.youtube.com/watch?v=H1G5K4gztK0


#include <stdio.h>			// Нужен, чтобы использовать printf для тестов

void	ft_swap(int *a, int *b)
{
	int temp;		// Создаем временную переменную

	temp = *a;		// В (temp) мы поместим временное значение переменной (a)
	*a = *b;		// Теперь в (b) мы поместим значение (a), первую переменную мы заменили, осталось поменять вторую
	*b = temp;		// Теперь, где у нас хранится (a), тобишь в (temp) мы помещаем в (b) и все.
}

int main()
{
	// Присваиваем тестовые значения, чтобы проверить работоспособность функции
	int a = 15;
	int b = -25;
	// Выводим значения
	printf("Old values:\na = %d\nb = %d\n", a, b);
		// Сейчас у нас такая картина:
		// a = 15
		// b = -25

	printf("Swap time\n");
		ft_swap(&a, &b);
			printf("New values:\na = %d\nb = %d\n", a, b);
			// После свапа картина такая:
			// a = -25
			// b = 15

	return 0;
}