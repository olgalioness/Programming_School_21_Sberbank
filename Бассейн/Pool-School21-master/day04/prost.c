/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prost.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 10:44:27 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/03 21:09:16 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	if (*str)
	{
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
	}
}

int		main(void) 
{
	int n;
	
	n = 5;
	//check ex00
	ft_putstr("ex00\n");
	printf("%i", ft_iterative_factorial(n));
	printf("\n");
	//check ex01
	ft_putstr("\nex01\n");
	printf("%i", ft_recursive_factorial(n));
	printf("\n");
	//check ex02
	ft_putstr("\nex02\n");
	int number = 2;
	int power = 3;

	printf("%i", ft_iterative_power(number, power));
	printf("\n");
	//check ex03
	ft_putstr("\nex03\n");
	printf("%d", ft_recursive_power(number, power));
	printf("\n");
	//check ex04
	ft_putstr("\nex04\n");
	printf("%i", ft_fibonacci(0));
	printf("\n");
	printf("%i", ft_fibonacci(1));
	printf("\n");
	printf("%i", ft_fibonacci(5));
	printf("\n");
/*	//check ex05
	ft_putstr("\nex05\n");
	int start = clock();
	printf("%d", ft_sqrt(2147482000));
	int end = clock();
	printf("%d", (end - start) / CLOCKS_PER_SEC);
	printf("\n");
	printf("%d\n", start);
	printf("%d\n", end);
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(113));
	printf("%d\n", ft_find_next_prime(30));
	printf("%d\n", ft_find_next_prime(192));*/



	return (0);
}
