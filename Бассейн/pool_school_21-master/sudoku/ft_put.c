/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 21:13:23 by pluton            #+#    #+#             */
/*   Updated: 2019/08/11 21:41:01 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_put_error(void)
{
	ft_putstr("Error\n");
	ft_putchar('\n');
}

void	ft_put_tab(t_ceil **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(tab[i][j].value + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_put_variant(t_ceil **tab)
{
	int i;
	int j;
	int i0;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			i0 = 0;
			ft_putchar('0' + i);
			ft_putchar('0' + j);
			ft_putchar(':');
			while (i0 < 9)
			{
				ft_putchar(tab[i][j].variant[i0] + '0');
				i0++;
			}
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
