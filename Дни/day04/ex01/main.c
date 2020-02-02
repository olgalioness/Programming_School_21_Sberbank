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

// | Turn-in directory: |      ex01/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_recursive_factorial.c       |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте рекурсивную функцию, которая возвращает факториал числа, заданного в качестве параметра.
//    Рекурсия и итерация - две разных вещи. В итерации действие просто повторяется до финиша.
//    А в рекурсии действие повторяется внутри действия до финиша. Пример рекурсии: художник рисует картину, в которой он рисует картину, в которой он рисует картину...
//    https://ru.hexlet.io/blog/posts/recursive
//    >Create a recursive function that returns the factorial of the number given as a parameter.
// 2. Если есть ошибка то return (0).
//    > If there’s an error, the function should return 0.
// 3. Here’s how it should be prototyped: int ft_recursive_factorial(int nb);

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb <= -1 || nb >= 13)
	{
		return (0);
	}
	else if (nb == 0)			// Если nb = 0, то факториал 0 будет равен 1, функция этого не учитывает, а мы учитываем, нашим условием.
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));	// мы сделали функцию внутри функции и т.д., ниже пример отлично объяснить как все это выглядит
		// Приложил скриншот с примером
	}
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(-33));
	printf("%d\n", ft_recursive_factorial(12));
	printf("%d\n", ft_recursive_factorial(13));
	return (0);
}