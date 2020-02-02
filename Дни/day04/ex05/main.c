/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:49:35 by marvin            #+#    #+#             */
/*   Updated: 2020/01/13 20:49:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex05/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_sqrt.c                      |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, которая возвращает квадратный корень из заданного числа (если он существует), или 0, если квадратный корень не является числом int.
//    > Create a function that returns the integer square root of a number (if it exists), or 0 if the square root is not an integer.
// 2. Here’s how it should be prototyped: int ft_sqrt(int nb);
// 3. Функция должна возвращать значение менее чем за 2 секунды. // Your function must return its result in less than two seconds.

// https://www.youtube.com/watch?v=UvKJGxvlDt4
//
// Num.    Square Root
// 1          1.000
// 2          1.414
// 3          1.732
// 4          2.000	=> sqrt(4) = 2 * 2 => 2
// 5          2.236
// 9		  3.000 => sqrt(9) = 3 * 3 => 3
// 23         4.796
// 24         4.899
// 25         5.000 => sqrt(25) = 5 * 5

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		sqrt;

	sqrt = 1;
	while ((sqrt * sqrt) < nb)
        sqrt += 1;
	if ((sqrt * sqrt) == nb)
        return (sqrt);
	return (0);
}

int main()
{
	printf("ft_sqrt(4) = 2 -> %d\n", ft_sqrt(4)); // 2
	printf("ft_sqrt(1) = 1 -> %d\n", ft_sqrt(1)); // 1
	printf("ft_sqrt(0) = 0 ->%d\n", ft_sqrt(0)); // 0
	printf("ft_sqrt(3) = 0 ->%d\n", ft_sqrt(3)); // 0
	printf("ft_sqrt(9) = 3 ->%d\n", ft_sqrt(9)); // 3
	printf("ft_sqrt(16) = 4 ->%d\n", ft_sqrt(16)); // 4
	printf("ft_sqrt(-5) = 0 ->%d\n", ft_sqrt(-5)); // 0
	printf("ft_sqrt() = 46340 ->%d\n", ft_sqrt(46340*46340)); // 12

	return(0);
}