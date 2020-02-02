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

// | Turn-in directory: |      ex03/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_recursive_power.c           |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте рекурсивную функцию, которая возвращает заданную степень заданного числа.
//    > Create a recursive function that returns the value of a power applied to a number.
// 2. Те же условия, что и раньше. Если корень меньше 0, то return 0. Переполнение данных не должно обрабатываться,
//    > Same conditions as before (An power lower than 0 returns 0. Overflows don’t have to be handled.).
// 3. Here’s how it should be prototyped: int ft_recursive_power(int nb, int power);

/* -------------------------------------------------------------------------- */
/* main & test                                                                */
/* -------------------------------------------------------------------------- */

#include <stdio.h>
#include <assert.h>

/* -------------------------------------------------------------------------- */
/* ft_recursive_power                                                         */
/* -------------------------------------------------------------------------- */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)				// Наша функция обработать этот момент не может, поэтому дополняем условием.
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));	// Пример с числами приложил в файле.
}

/* -------------------------------------------------------------------------- */
/* main & test                                                                */
/* -------------------------------------------------------------------------- */

int   main(void)
{
    printf("%d\n", ft_recursive_power(2, 2)); // 4
    printf("%d\n", ft_recursive_power(2, 1)); //2
    printf("%d\n", ft_recursive_power(2, 0)); // 1
    printf("%d\n", ft_recursive_power(2, -3)); // 0
    printf("%d\n", ft_recursive_power(2, 4)); // 16
    printf("%d\n", ft_recursive_power(5, 3)); // 125
    printf("%d\n", ft_recursive_power(3, 5)); // 243
}