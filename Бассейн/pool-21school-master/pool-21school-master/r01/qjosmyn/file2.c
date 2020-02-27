/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 11:03:01 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/11 23:10:29 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"
#include <stdio.h>
int		ft_search(char ***str_3d, int i, int j)
{
	printf("WORK");
	ft_check_all(str_3d);
	if (i < N)
	{
		if (j < N)
		{
			printf("WORK");
			if (ft_replace(str_3d, i, j) == TRUE)
			{
				if (0 == ft_search(str_3d, i + 1, j + 1))
					return (0);
			}
			else
			{
				ft_backtracking(str_3d, i + 1, j + 1, 0);
			}
		}
		else
			j = 0;
	}
	if (check_sudoku(str_3d))
		return (1);
	else
		return (0);
}

int		ft_replace(char ***str_3d, int i, int j)
{
	int k;
	int n;
	int h;

	k = 0;
	n = 0;
	while (k < (N + 1))
	{
		if (str_3d[i][j][k] == '0')
			n++;
		else
			h = k;
		k++;
	}
	if (n == N)
	{
		str_3d[i][j][0] = str_3d[i][j][h];
		str_3d[i][j][h] = '0';
		return (TRUE);
	}
	else
		return (FALSE);
}
