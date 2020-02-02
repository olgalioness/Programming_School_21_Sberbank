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

// | Turn-in directory: |      ex00/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_iterative_factorial.c       |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте итерационную функцию, которая возвращает число. Это число является результатом факториальной операции на основе числа, заданного в качестве параметра.
//    Что такое итерация? Повторение действия до выполнения определенного результата. https://ru.wikipedia.org/wiki/Итерация_(программирование)
//    > Create an iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter.
// 2. Если есть ошибка то return (0).
//    > If there’s an error, the function should return 0.
// 3. Here’s how it should be prototyped : c int ft_iterative_factorial(int nb);
// 4. Функция должна вернуть результат менее, чем за 2 секунды.
//    > Your function must return its result in less than two seconds.

// https://github.com/calimoose42/test/blob/9bcf376b6fe9b1af58ea7616bb624694c93dbde8/j_04/ex00/ft_iterative_factorial.c
// About factorial:
// 5! = 1 * 2 * 3 * 4 * 5 = 120
// 0! = 1

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;				// Объявляем counter и factorial
	int fact;

	if (nb <= -1 || nb >= 13)	// Если будут поданы такие условия, то return(0)
	{							// nb <= -1 : отрицательные числа не могут быть поданы
		return (0);				// nb >= 13 : т.к. прототип обязует nb типом int, а int не может содержать в себе более чем 2 147 483 647
	}							// а факториал от 13 будет превышать это значение, то логично, что должна быть ошибка

	fact = 1;			// Присваиваем i и fatorial для цикла while
	i = 0;
	while (i++ < nb)
	{					// =/ nb3 \=
		fact *= i;		// fact.1 = fact.1*i.0 => 0 />/ fact.1 = fact.1*i.1 => 1 />/ fact.1 = fact.1*i.2 => 2 />/ fact.2 = fact.2*i.3 => 6
	}					// i++ = i.0 + 1	   => 1 />/ i.1++ = 2		    => 2 />/ i.2++ = 3			 => 3 />/ i.3++ = 4 (while!)
	return (fact);
}						// Почему fact.0 превращается в 1? Проверяет условие i.0<nb.0 → цикл → условие i.1<nb.0 ! вывод, данный цикл в функции позволяет нам 0 превратить в 1

// 	i = 1;						// Присваиваем i и fatorial = 1, для цикла while
// 	factorial = 1;


int	main()
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-33));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(13));
}