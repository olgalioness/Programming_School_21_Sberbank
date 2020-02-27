/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:24:11 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/10 20:11:23 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int		**mk_empty_grid(void)
{
	int i;
	int **new_grid;

	i = 0;
	new_grid = NULL;
	if (!(new_grid = ((int **)malloc(sizeof(int *) * 9))))
		return (NULL);
	while (i < 9)
		if (!(new_grid[i++] = (int *)malloc(sizeof(int) * 9)))
			return (NULL);
	return (new_grid);
}

void	destroy_grid(int **old_grid)
{
	int i;

	i = 0;
	while (i < 9)
	{
		free(old_grid[i]);
		old_grid[i] = NULL;
		i++;
	}
	free(old_grid);
	old_grid = NULL;
}

int		**cp_grid(int **orig_grid)
{
	int **res_grid;
	int i;
	int j;

	res_grid = mk_empty_grid();
	if (!res_grid)
		return (NULL);
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			res_grid[i][j] = orig_grid[i][j];
			j++;
		}
		i++;
	}
	return (res_grid);
}

int		**fill_grid(char **argv)
{
	int i;
	int j;
	int **res_grid;

	res_grid = mk_empty_grid();
	if (!res_grid)
		return (NULL);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] < '1' && argv[i][j] > '9') && (argv[i][j] != '.'))
			{
				destroy_grid(res_grid);
				return (res_grid);
			}
			res_grid[i - 1][j] = (argv[i][j] == '.') ? 0 : argv[i][j] - '0';
			j++;
		}
		i++;
	}
	return (res_grid);
}
