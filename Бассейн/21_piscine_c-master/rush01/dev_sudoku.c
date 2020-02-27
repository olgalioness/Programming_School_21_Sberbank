/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-1.t                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 11:37:38 by mshagga           #+#    #+#             */
/*   Updated: 2019/02/10 16:29:59 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // !!!
#include <unistd.h>
#include <stdlib.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void		put_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		**mk_empty_grid()
{
	int i;
	int **new_grid;
	
	i = 0;
	new_grid = NULL;
	new_grid = ((int **)malloc(sizeof(int *) * 9));
	while (i < 9)
		new_grid[i++] = (int *)malloc(sizeof(int) * 9);
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

int	**cp_grid(int **orig_grid)
{
	int **res_grid;
	int i;
	int j;

	res_grid = mk_empty_grid();
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
	i = 1;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
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

int			is_box(int row, int col,  int **grid, int value)
{
	int i;
	int j;

	i = row - row % 3;
	while (i < (row - row % 3) + 3)
	{
		j = col - col % 3;
		while (j < (col - col % 3) + 3)
		{	
			//printf("IB : i = %d, j = %d\n", i , j);
			if (grid[i][j] == value && (i != row && j != col) && grid[i][j] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int			is_row(int row, int col, int **grid, int value)
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

int			is_col(int row, int col,  int **grid, int value)
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

int			is_valid_grid(int **grid)
{
	int i;
	int j;
	
	i = 0;
	while (i <= 8)
	{
		j = 0;
		while (j <= 8)
		{
			if (!is_col(i, j, grid, grid[i][j]) || !is_row(i, j, grid, grid[i][j]) || !is_box(i, j, grid, grid[i][j]))
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

void		display_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	while (i <= 8)
	{
		j = 0;
		while (j <= 8)
		{
			put_char(grid[i][j] + '0');
			put_char(' ');
			j++;
		}
		put_char('\n');
		i++;
	}
}

int g_i = 0; /// !!
int g_stop = 0;

int		solve(int **parent_grid, int row, int col, int new_value)
{
	//if (g_stop++ > 100) return (0);

	int **new_grid;
	int	assum_value;
	int flag_full;
	int flag_valid;

	//printf("\nSolve run no. %d\n",g_i++ );
	//printf("Parent (row = %d, col = %d, value = %d): \n", row, col, new_value);
	//display_grid(parent_grid);
	flag_full = !next_empty(parent_grid, &row, &col);
	//printf("New (row = %d, col = %d, value = %d): \n", row, col, new_value);
	flag_valid = is_col(row, col, parent_grid, new_value) * is_row(row, col, parent_grid, new_value) * is_box(row, col, parent_grid, new_value);
	//printf("is_col = %d is_row = %d is_box = %d\n", is_col(row, col, parent_grid, new_value), is_row(row, col, parent_grid, new_value),  is_box(row, col, parent_grid, new_value));
	//printf("Valid = %d, full = %d\n", flag_valid, flag_full);
	if (!flag_valid)
		return (0);
	if (flag_full)
	{
		//printf("=============================================================");
		display_grid(parent_grid);
		return (1);
		//printf("============================================================");

	}
	assum_value = 1;
	new_grid = cp_grid(parent_grid);
	new_grid[row][col] = new_value;
	//printf("\nChild (row = %d, col = %d, value = %d): \n", row, col, new_value);
	//display_grid(new_grid);
	while (assum_value < 10)
	{
		//if (
		solve(new_grid, row, col, assum_value)//)
		//	return (1);
		assum_value++;
	}
	//printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	destroy_grid(new_grid);
	return (0);
}

int			main(int argc, char **argv)
{
	int **grid0;

	grid0 = NULL;
	if (argc != 10)
	{
		put_str("Error\n");
		return (0);
	}
	grid0 = fill_grid(argv);
	//printf("MAIN :\n"); // !!!
	//display_grid(grid0); // !!!
	if (!is_valid_grid(grid0))
	{
		put_str("Error\n");
		return (0);
	}
	solve(grid0, 0, 0, 0);
	destroy_grid(grid0);
	return (0);
}
