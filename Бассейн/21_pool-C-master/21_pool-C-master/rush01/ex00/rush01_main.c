/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nannamae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 19:54:46 by nannamae          #+#    #+#             */
/*   Updated: 2019/06/15 21:36:00 by nannamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	display(int **matrix);
int		**formdigits(char **mat);
int		is_digit(char c, int *count);
char	**get_matrix(int argc, char **argv);
int		findnull(int **matrix, int *i, int *j);
int		check_col(int **matrix, int col, int x);
int		check_row(int **matrix, int row, int x);
int		verif(int **matrix, int row, int col, int x);
int		check_box(int **matrix, int bi, int bj, int x);

int		solve(int **matrix)
{
	int row;
	int col;
	int x;

	if (!findnull(matrix, &row, &col))
		return (1);
	x = 1;
	while (x <= 9)
	{
		if (verif(matrix, row, col, x))
		{
			*(*(matrix + row) + col) = x;
			if (solve(matrix))
				return (1);
			*(*(matrix + row) + col) = 0;
		}
		x++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	**grid;
	int		**matrix;

	grid = get_matrix(argc, argv);
	if (grid)
	{
		matrix = formdigits(grid);
		if (matrix)
		{
			if (solve(matrix))
				display(matrix);
			else
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
