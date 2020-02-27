/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 12:08:14 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/22 12:37:51 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int n;

	i = 1;
	n = 0;
	while (*str <= 32)
		str++;
	if (*str == '-')
	{
		i = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = 10 * n + *str - '0';
		str++;
	}
	return (i * n);
}

int		prime_numbers(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnumber(int n)
{
	if (n >= 10)
	{
		ft_putnumber(n / 10);
	}
	ft_putchar(n % 10 + '0');
	return ;
}

int		main(int argc, char** argv)
{
	int n;
	int sum;
	int i;

	i = 2;
	sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n > 0)
			while (i <= n)
			{
				if (prime_numbers(i))
					sum = sum + i;
				i++;
			}
		ft_putnumber(sum);
	}
	else
		ft_putnumber(sum);
	ft_putchar('\n');
	return (0);
}
