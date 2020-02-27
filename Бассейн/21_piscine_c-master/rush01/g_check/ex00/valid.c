/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:26:01 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/10 19:09:57 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int		is_box(int row, int col, int **grid, int value)
{
	int i;
	int j;

	i = row - row % 3;
	while (i < (row - row % 3) + 3)
	{
		j = col - col % 3;
		while (j < (col - col % 3) + 3)
		{
			if (grid[i][j] == value && (i != row && j != col) && grid[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		is_row(int row, int col, int **grid, int value)
{
	int j;

	j = 0;
	while (j <= 8)
	{
		if (value == grid[row][j] && j != col && grid[row][j] != 0)
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int		is_col(int row, int col, int **grid, int value)
{
	int i;

	i = 0;
	while (i <= 8)
	{
		if (value == grid[i][col] && i != row && grid[i][col] != 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		is_valid_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	while (i <= 8)
	{
		j = 0;
		while (j <= 8)
		{
			if (!is_col(i, j, grid, grid[i][j]) ||
				!is_row(i, j, grid, grid[i][j]) ||
				!is_box(i, j, grid, grid[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		next_empty(int **grid, int *row, int *col)
{
	while ((*row) < 9)
	{
		while ((*col) < 9)
		{
			if (grid[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		*col = 0;
		(*row)++;
	}
	(*row)--;
	return (0);
}
