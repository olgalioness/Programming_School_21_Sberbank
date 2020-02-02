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

// | Turn-in directory: |      ex02/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_iterative_power.c           |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте итеративную функцию, которая возвращает заданную степень заданного числа.
//    > Create an iterated function that returns the value of a power applied to a number.
// 2. Если корень меньше 0, то return 0. Переполнение данных не должно обрабатываться,
//    тобишь условия с ограничением по макс. значению int обрабатывать не надо.
//    > An power lower than 0 returns 0. Overflows don’t have to be handled.
// 3. Here’s how it should be prototyped: int ft_iterative_power(int nb, int power);
// 4. Your function must return its result in less than two seconds.

#include <stdio.h>

// // galimoose
// int	ft_iterative_power(int nb, int power)
// {
// 	int i;
// 	int result;

// 	if (power < 0)
// 	{
// 		return (0);
// 	}

// 	result = 1;
// 	i = 0;
// 	while (i < power)
// 	{
// 		result = result * nb;	//1 * nb stores in result, then keeps * nb until #repetitions=pwr
// 		i++;
// 	}
// 	return (result);		//if power = 0, i !< pwr, but return (result) will give 1
// }

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power <= -1)
	{
		return (0);
	}

	result = 1;				// =/ nb5 power3 \=
	while (power--)
	{
		result *= nb;		// =/ result.1 = 1*5  => result.5   />/   result.5 = 5*5 => result.25   />/   result.25 = 25*5 => result.125
	}						// =/ power.3 - 1	  => power.2    />/   power.2 - 1    => power.1     />/   power.1 - 1 = 0
	return (result);
	// Почему power.0 nb.0 превращается в 1? В соотвествии с нашей функции, она это обработать может.
	// while(x--) stops after the result of x-- has been evaluated to false / 0
	// Because of the post decrement, x has value -1 after the loop has finished.
}

int	main()
{
	printf("%d\n", ft_iterative_power(3, 4));	//should be 81
	printf("%d\n", ft_iterative_power(10, -4));	//should be 0
	printf("%d\n", ft_iterative_power(14, 0));	//should be 1
	printf("%d\n", ft_iterative_power(0, 0));	//should be 1
	printf("%d\n", ft_iterative_power(182, 2));	//should be 33124
	printf("%d\n", ft_iterative_power(13, 7));	//should be 62 748 517
}