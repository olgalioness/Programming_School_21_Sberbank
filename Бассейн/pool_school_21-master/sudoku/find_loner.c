/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_loner.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 20:54:30 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/11 21:38:44 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

int g_a[3] = {1, -1, -1};
int g_b[3] = {2, 1, -2};

void	del_variantceil(t_ceil **tab, int column, int line, int val)
{
	int i0;
	int i1;
	int j0;
	int j1;

	i0 = g_a[column % 3];
	i1 = g_b[column % 3];
	j0 = g_a[line % 3];
	j1 = g_b[line % 3];
	tab[column + i0][line + j0].variant[val] = 0;
	tab[column + i0][line + j1].variant[val] = 0;
	tab[column + i1][line + j0].variant[val] = 0;
	tab[column + i1][line + j1].variant[val] = 0;
}

void	checkvariant(t_ceil *tab)
{
	int i;
	int count;
	int val;

	val = 0;
	i = 0;
	count = 0;
	while (i < 9)
	{
		if (tab->variant[i] != 0)
		{
			count++;
			val = tab->variant[i];
		}
		i++;
	}
	if (count == 1)
		tab->value = val;
}

void	del_variant(t_ceil **tab, int column, int line)
{
	int i;
	int val;

	i = 0;
	val = tab[column][line].value - 1;
	while (i < 9)
	{
		val = tab[column][line].value - 1;
		i++;
	}
	while (i < 9)
	{
		tab[column][i].variant[val] = 0;
		i++;
	}
	i = 0;
	while (i < 9)
	{
		tab[i][line].variant[val] = 0;
		i++;
	}
	del_variantceil(tab, column, line, val);
}

void	find(t_ceil **tab, int *fl)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j].value == 0)
				checkvariant(&tab[i][j]);
			if (tab[i][j].value != 0 && tab[i][j].bool == 1)
			{
				del_variant(tab, i, j);
				tab[i][j].bool = 0;
				*fl = 1;
			}
			j++;
		}
		i++;
	}
}

void	find_loner(t_ceil **tab)
{
	int fl;

	fl = 1;
	while (fl)
	{
		fl = 0;
		find(tab, &fl);
	}
}
