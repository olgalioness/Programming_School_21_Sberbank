/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:10:37 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 16:58:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *nbr)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (nbr[i] != '\0')
	{
		res = res * 10 + (nbr[i] - '0');
		i++;
	}
	return (res);
}

void	ft_putnbr(int nbr)
{
	int tab[10];
	int i;

	i = 0;
	while (nbr)
	{
		tab[i] = nbr % 10;
		nbr = nbr / 10;
		i++;
	}
	i--;
	while (i > -1)
	{
		ft_putchar(tab[i] + '0');
		i--;
	}
}

int		add_prime_sum(int nbr)
{
	int res;
	int i;
	int j;
	int fl;

	i = 3;
	res = 2;
	while (i <= nbr)
	{
		j = 2;
		fl = 1;
		while (j <= i / 2)
		{
			if (i % j == 0)
			{
				fl = 0;
				break ;
			}
			j++;
		}
		if (fl)
			res += i;
		i++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	int res;

	if (argc == 2)
	{
		res = ft_atoi(argv[1]);
		if (res > 1)
		{
			res = add_prime_sum(res);
			ft_putnbr(res);
		}
		else 
			ft_putchar('0');
	}		
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
