/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 20:27:04 by dporres           #+#    #+#             */
/*   Updated: 2018/03/25 23:02:53 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		nearby(int n);

void	print_grid(int **grid)
{
	int		i;
	int		j;
	char	x[2];

	i = 0;
	x[1] = ' ';
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			x[0] = '0' + grid[i][j];
			if (j != 8)
				write(1, &x[0], 2);
			else
				write(1, &x[0], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		**read_grid(char **argv)
{
	int i;
	int j;
	int **grid;

	i = 0;
	grid = (int**)malloc(sizeof(int*) * 9);
	while (i < 9)
	{
		if (ft_strlen(argv[i]) != 9)
			return (NULL);
		grid[i] = (int*)malloc(sizeof(int) * 9);
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				grid[i][j] = argv[i][j] - '0';
			}
			else
				grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

int		validate(int **grid, int row, int col, int val)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		if (grid[i][col] == val || grid[row][i] == val)
			return (0);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (grid[nearby(row) + i][nearby(col) + j] == val)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		fill(int **grid, int n)
{
	int i;
	int j;
	int x;

	i = n / 9;
	j = n % 9;
	x = 1;
	if (n >= 81)
		return (1);
	if (grid[i][j] != 0)
		return (fill(grid, n + 1));
	while (x < 10)
	{
		if (validate(grid, i, j, x))
		{
			grid[i][j] = x;
			if (fill(grid, n + 1))
				return (1);
			else
				grid[i][j] = 0;
		}
		x++;
	}
	return (0);
}

int		ft_validate_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (grid[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
