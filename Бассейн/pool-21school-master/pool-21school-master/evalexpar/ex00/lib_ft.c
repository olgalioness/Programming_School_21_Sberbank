/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 12:39:44 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/18 23:00:05 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_atoi(char *str)
{
	int i;
	int n;

	n = 0;
	i = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
			|| *str == '\b' || *str == '\r' || *str == '\f' || *str == '0')
		str++;
	if (*str == '-')
	{
		i = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = 10 * n + (*str - '0');
		str++;
	}
	return (i * n);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		nbr = (-1) * nb;
		ft_putchar('-');
	}
	else
		nbr = nb;
	if (nbr == 2147483648)
	{
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	else
	{
		if (nbr >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	return ;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
