/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 21:24:41 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 21:23:32 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rushhelp01(int col, int row, int x, int y)
{
	if ((col == 1 && row == 1) || ((col == x && row == y) && x != 1 && y != 1))
	{
		ft_putchar('/');
	}
	else if ((col == 1 && row == y) || (col == x && row == 1))
	{
		ft_putchar('\\');
	}
	else if ((col > 1 && row == 1) || (col > 1 && row == y))
	{
		ft_putchar('*');
	}
	else if ((col == 1 && row > 1) || (col == x && row > 1))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush01(int x, int y)
{
	int col;
	int row;

	if (x >= 0 && y >= 0)
	{
		row = 1;
		while (row <= y)
		{
			col = 1;
			while (col <= x)
			{
				rushhelp01(col, row, x, y);
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush01(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
