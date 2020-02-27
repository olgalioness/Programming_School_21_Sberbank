/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_check_functions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nannamae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 19:56:18 by nannamae          #+#    #+#             */
/*   Updated: 2019/06/15 21:13:22 by nannamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	findnull(int **matrix, int *i, int *j)
{
	*i = 0;
	while (*i < 9)
	{
		*j = 0;
		while (*j < 9)
		{
			if (*(*(matrix + *i) + *j) == 0)
				return (1);
			*j = *j + 1;
		}
		*i = *i + 1;
	}
	return (0);
}

int	check_col(int **matrix, int col, int x)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (*(*(matrix + i) + col) == x)
			return (0);
		i++;
	}
	return (1);
}

int	check_row(int **matrix, int row, int x)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (*(*(matrix + row) + j) == x)
			return (0);
		j++;
	}
	return (1);
}

int	check_box(int **matrix, int bi, int bj, int x)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (*(*(matrix + bi + i) + bj + j) == x)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	verif(int **matrix, int row, int col, int x)
{
	int res;

	res = (check_row(matrix, row, x) && check_col(matrix, col, x)
			&& check_box(matrix, row - row % 3, col - col % 3, x)
			&& *(*(matrix + row) + col) == 0);
	return (res);
}
