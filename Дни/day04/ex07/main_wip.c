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

// | Turn-in directory: |      ex07/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_find_next_prime.c           |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, которая возвращает следующее простое число больше или равно числу, заданному в качестве аргумента.
//    > Create a function that returns the next prime number greater or equal to the number given as argument.
// 2. Here’s how it should be prototyped: int ft_find_next_prime(int nb);
// 3. Функция должна возвращать значение менее чем за 2 секунды. // Your function must return its result in less than two second

#include <stdio.h>

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (ft_find_next_prime(nb + 1));
	while (i < nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(19));
	printf("%d\n", ft_find_next_prime(23));
	printf("%d\n", ft_find_next_prime(29));
	printf("%d\n", ft_find_next_prime(31));
	printf("%d\n", ft_find_next_prime(37));
	printf("%d\n", ft_find_next_prime(41));
	printf("%d\n", ft_find_next_prime(43));
	printf("%d\n", ft_find_next_prime(47));
	printf("%d\n", ft_find_next_prime(53));
	printf("%d\n", ft_find_next_prime(59));
	printf("%d\n", ft_find_next_prime(61));
	printf("%d\n", ft_find_next_prime(67));
	printf("%d\n", ft_find_next_prime(71));
	printf("%d\n", ft_find_next_prime(73));
	printf("%d\n", ft_find_next_prime(79));
	printf("%d\n", ft_find_next_prime(83));
	printf("%d\n", ft_find_next_prime(89));
	printf("%d\n", ft_find_next_prime(97));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(12));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(20));
	printf("%d\n", ft_find_next_prime(30));
	printf("%d\n", ft_find_next_prime(40));
	return (0);
}