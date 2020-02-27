/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:16:34 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 22:48:43 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	printarr(int *a, int i, int b, int c)
{
	if (b == 1)
		ft_putchar('-');
	if (c == 1)
		a[0] += 1;
	while (0 <= i)
	{
		ft_putchar('0' + a[i]);
		i--;
	}
}

void	isgoodnumber(int *nb, int *b, int *c)
{
	if (*nb < 0)
	{
		if (*nb == -2147483648)
		{
			*nb += 1;
			*c = 1;
		}
		*b = 1;
		*nb *= -1;
	}
}

void	ft_putnbr(int nb)
{
	int i;
	int a[10];
	int b;
	int c;

	i = 0;
	b = 0;
	c = 0;
	isgoodnumber(&nb, &b, &c);
	while (0 < nb / 10)
	{
		a[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	if (nb < 10)
		a[i] = nb;
	printarr(a, i, b, c);
}
