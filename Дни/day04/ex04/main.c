/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ee.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 16:10:45 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/12 16:10:45 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex04/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_fibonacci.c                 |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создать функцию ft_fibonacci, которая возвращает последовательное число Фибоначчи заданное через n-ое число, при этом первый элемент находится в индексе 0.
//    Мы считаем, что последовательность Фибоначчи начинается вот так: 0, 1, 1, 2.
//    > Create a function ft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index.
//    We’ll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2.
// 2. Here’s how it should be prototyped: int ft_fibonacci(int index);
// 3. Очевидно, что ft_fibonacci должна быть рекурсивной. // Obviously, ft_fibonacci has to be recursive
// 4. Если индекс меньше 0, тогда функция должна вернуть -1. // If the index is less than 0, the function should return -1.

// Описание задачи в png
// https://www.youtube.com/watch?v=F4HNO4rCQ2c решение с разбором.

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)		// Если индекс меньше 0, тогда функция должна вернуть -1.
	{
		return (-1);
	}
	if (index == 0)		// Согласно последовательности фибоначи, n/index/ должен начинаться с 2
	{
		return (0);
	}
	if (index == 1)		// Согласно последовательности фибоначи, n/index/ должен начинаться с 2
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
   //ex04
	printf("fib: %d  exp: %d ft_fib: %d\n", 0, 0, ft_fibonacci(0));
	printf("fib: %d  exp: %d ft_fib: %d\n", 1, 1, ft_fibonacci(1));
	printf("fib: %d  exp: %d ft_fib: %d\n", 2, 1, ft_fibonacci(2));
	printf("fib: %d  exp: %d ft_fib: %d\n", 3, 2, ft_fibonacci(3));
	printf("fib: %d  exp: %d ft_fib: %d\n", 5, 5, ft_fibonacci(5));
	printf("fib: %d  exp: %d ft_fib: %d\n", 8, 21, ft_fibonacci(8));
	printf("fib: %d  exp: %d ft_fib: %d\n", -2, -1, ft_fibonacci(-2));
   return 0;
} 