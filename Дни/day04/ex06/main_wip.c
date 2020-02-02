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

// | Turn-in directory: |      ex06/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_is_prime.c                  |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, которая возвращает 1, если число данное в роли параметра будет являться простым, и 0 если являться таковым не будет.
//    > Create a function that returns 1 if the number given as a parameter is a prime number, and 0 if it isn’t.
// 2. Here’s how it should be prototyped: int ft_is_prime(int nb);
// 3. Функция должна возвращать значение менее чем за 2 секунды. // Your function must return its result in less than two seconds.
// !. 0 и 1 не простые числа // 0 and 1 are not prime numbers.

// Что такое простые числа? https://www.youtube.com/watch?v=MOfrwf0qwJc

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(19));
	printf("%d\n", ft_is_prime(23));
	printf("%d\n", ft_is_prime(29));
	printf("%d\n", ft_is_prime(31));
	printf("%d\n", ft_is_prime(37));
	printf("%d\n", ft_is_prime(41));
	printf("%d\n", ft_is_prime(43));
	printf("%d\n", ft_is_prime(47));
	printf("%d\n", ft_is_prime(53));
	printf("%d\n", ft_is_prime(59));
	printf("%d\n", ft_is_prime(61));
	printf("%d\n", ft_is_prime(67));
	printf("%d\n", ft_is_prime(71));
	printf("%d\n", ft_is_prime(73));
	printf("%d\n", ft_is_prime(79));
	printf("%d\n", ft_is_prime(83));
	printf("%d\n", ft_is_prime(89));
	printf("%d\n", ft_is_prime(97));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(12));
	printf("%d\n", ft_is_prime(15));
	printf("%d\n", ft_is_prime(20));
	printf("%d\n", ft_is_prime(30));
	printf("%d\n", ft_is_prime(40));
	return (0);
}