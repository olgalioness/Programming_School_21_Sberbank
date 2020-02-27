/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 11:02:32 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/11 22:02:10 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	ft_check_all(char ***str_3d)
{
	int j;

	j = 0;
	while (j < N)
	{
		ft_check(str_3d, j);
		j++;
	}
}

void	ft_check(char ***str_3d, int j)
{
	int i;
	int k;

	i = 0;
	while (i < N)
	{
		if (str_3d[i][j][0] == '0')
		{
			k = 0;
			while (k < (N + 1))
			{
				col_check(str_3d, i, j, k);
				line_check(str_3d, i, j, k);
				square_check(str_3d, i, j, k);
				k++;
			}
		}
		i++;
	}
}

void	square_check(char ***str_3d, int i, int j, int k)
{
	int new_i;
	int new_j;
	int line;
	int col;

	new_i = 0;
	while (new_i < N / 3)
	{
		line = new_i + (i / 3) * 3;
		new_j = 0;
		while (new_j < N / 3)
		{
			col = new_j + (j / 3) * 3;
			if (str_3d[i][j][k] != '0'
					&& str_3d[i][j][k] == str_3d[line][col][0])
				str_3d[i][j][k] = '0';
			new_j++;
		}
		new_i++;
	}
}

void	col_check(char ***str_3d, int i, int j, int k)
{
	int new_i;

	new_i = 0;
	while (new_i < N)
	{
		if (str_3d[i][j][k] != '0'
				&& str_3d[i][j][k] == str_3d[new_i][j][0])
			str_3d[i][j][k] = '0';
		new_i++;
	}
}

void	line_check(char ***str_3d, int i, int j, int k)
{
	int new_j;

	new_j = 0;
	while (new_j < N)
	{
		if (str_3d[i][j][k] != '0'
				&& str_3d[i][j][k] == str_3d[i][new_j][0])
			str_3d[i][j][k] = '0';
		new_j++;
	}
}
