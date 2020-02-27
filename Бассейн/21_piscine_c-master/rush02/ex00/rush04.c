/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 23:47:51 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/02 23:47:52 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_head.h"

void	ft_putline(int x, char c_s, char c_m, char c_e)
{
	int i;

	i = 0;
	while (++i <= x)
		if (i == 1)
			ft_putchar(c_s);
		else if (i == x)
			ft_putchar(c_e);
		else
			ft_putchar(c_m);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	j = 0;
	while (++j <= y)
		if (j == 1)
			ft_putline(x, 'A', 'B', 'C');
		else if (j == y)
			ft_putline(x, 'C', 'B', 'A');
		else
			ft_putline(x, 'B', ' ', 'B');
}
