/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_matrix_handling.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nannamae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 19:59:13 by nannamae          #+#    #+#             */
/*   Updated: 2019/06/15 21:30:16 by nannamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		is_digit(char c, int *count)
{
	if (c >= '0' && c <= '9')
	{
		*count = *count + 1;
		return (1);
	}
	return (0);
}

int		**formdigits(char **mat)
{
	int	i;
	int j;
	int **res;
	int c;

	c = 0;
	i = 0;
	j = 0;
	res = (int**)malloc(sizeof(int*) * 9);
	while (i < 9)
	{
		j = 0;
		*(res + i) = (int*)malloc(sizeof(int) * 9);
		while (j < 9)
		{
			*(*(res + i) + j) = (is_digit(*(*(mat + i) + j), &c)) ?
				*(*(mat + i) + j) - 48 : 0;
			j++;
		}
		i++;
	}
	return ((c >= 17) ? res : 0);
}

char	**get_matrix(int argc, char **argv)
{
	int		i;
	int		j;
	char	**res;

	if (argc != 10)
		return (0);
	i = 1;
	res = (char**)malloc(9 * sizeof(char*));
	while (i < argc)
	{
		j = 0;
		*(res + i - 1) = (char*)malloc(9 * sizeof(char));
		while (*(*(argv + i) + j) && (*(*(argv + i) + j) == '.' ||
					(*(*(argv + i) + j) >= '1' && *(*(argv + i) + j) <= '9')))
		{
			*(*(res + i - 1) + j) = *(*(argv + i) + j);
			j++;
		}
		if (j < 9)
			return (0);
		i++;
	}
	return (res);
}

void	display(int **matrix)
{
	int		i;
	int		j;
	char	el;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			el = *(*(matrix + i) + j) + 48;
			write(1, &el, 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
