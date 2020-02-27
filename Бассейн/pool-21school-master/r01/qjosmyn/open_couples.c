/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_couples.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:02:09 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/11 23:10:26 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	ft_backtracking(char ***str_3d, int i, int j, int k)
{
	int n;

	if (i < N)
	{
		if (j < N)
		{
			if (str_3d[i][j][0] == '0')
					while (k < (N + 1))
					{
						k = 0;
						if (str_3d[i][j][k] != '0')
						{
							str_3d[i][j][0] = str_3d[i][j][k];
							n = ft_search(str_3d, i ,j);
						}
						k++;
					}
		}
		else
			j = 0;
	}
}

int		check_square_pvtr(char ***str_3d, int i, int j, int k)
{
	int new_i;
	int new_j;
	int line;
	int col;

	k = 1;
	new_i = 0;
	while (new_i < N / 3)
	{
		line = new_i + (i / 3) * 3;
		new_j = 0;
		while (new_j < N / 3)
		{
			col = new_j + (j / 3) * 3;
			if (str_3d[i][j][0] == str_3d[line][col][0])
				return (TRUE);
			new_j++;
		}
		new_i++;
	}
	return (FALSE);
}

int		check_sudoku(char ***str_3d)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			k = 0;
			while (k < N)
			{
				if ( check_col_pvtr(str_3d, i, j)
						&& check_line_pvtr(str_3d, i, j)
						&& check_square_pvtr(str_3d, i, j, k))
					return (FALSE);
			}
			j++;
		}
		i++;
	}
	return (TRUE);
}

int		check_col_pvtr(char ***str, int i, int j)
{
	int new_i;
	
	new_i = 0;
	while (i < N)
	{
		if (str[new_i][j][0] == str[i][j][0])
			return (TRUE);
		new_i++;
	}
	return (FALSE);
}

int		check_line_pvtr(char ***str, int i, int j)
{
	int new_j;

	new_j = 0;
	while (i < N)
	{
		if (str[i][new_j][0] == str[i][j][0])
			return (TRUE);
		new_j++;
	}
	return (FALSE);
}
