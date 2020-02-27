/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:10:16 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/10 20:09:15 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int		valid_helper(int row, int col, int **parent_grid, int new_value)
{
	return (is_col(row, col, parent_grid, new_value) *
			is_row(row, col, parent_grid, new_value) *
			is_box(row, col, parent_grid, new_value));
}

int		solve(int **parent_grid, int row, int col, int new_value)
{
	int **new_grid;
	int	assum_value;
	int flag_full;

	flag_full = !next_empty(parent_grid, &row, &col);
	if (!(valid_helper(row, col, parent_grid, new_value)))
		return (0);
	if (flag_full)
	{
		display_grid(parent_grid);
		return (1);
	}
	assum_value = 1;
	new_grid = cp_grid(parent_grid);
	if (!new_grid)
		return (-1);
	new_grid[row][col] = new_value;
	while (assum_value < 10)
		if (solve(new_grid, row, col, assum_value++))
		{
			destroy_grid(new_grid);
			return (1);
		}
	destroy_grid(new_grid);
	return (0);
}

int		main(int argc, char **argv)
{
	int **grid0;

	grid0 = NULL;
	if (argc != 10)
	{
		put_str("Error\n");
		return (0);
	}
	grid0 = fill_grid(argv);
	if (!grid0 ||
		!is_valid_grid(grid0) ||
		solve(grid0, 0, 0, 0) == -1)
	{
		put_str("Error\n");
		return (0);
	}
	destroy_grid(grid0);
	return (0);
}
