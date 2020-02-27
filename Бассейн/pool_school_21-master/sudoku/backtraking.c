/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtraking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:17:07 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/11 21:05:43 by pluton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

int		no_conflicts2(t_ceil **tab, int col, int line, int num)
{
	int i;
	int j;
	int ii;
	int jj;

	i = 0;
	ii = col / 3 * 3;
	jj = line / 3 * 3;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (tab[ii + i][jj + j].value == num)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		no_conflicts(t_ceil **tab, int com, int line, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[com][i].value == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (tab[i][line].value == num)
			return (0);
		i++;
	}
	return (no_conflicts2(tab, com, line, num));
}

int		find_unassigned_location(t_ceil **tab, int *col, int *line)
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
			{
				*col = i;
				*line = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		backtracking(t_ceil **tab)
{
	int num;
	int col;
	int line;

	if (!find_unassigned_location(tab, &col, &line))
		return (1);
	num = 1;
	while (num <= 9)
	{
		if (no_conflicts(tab, col, line, num))
		{
			tab[col][line].value = num;
			if (backtracking(tab))
				return (1);
			tab[col][line].value = 0;
		}
		num++;
	}
	return (0);
}
