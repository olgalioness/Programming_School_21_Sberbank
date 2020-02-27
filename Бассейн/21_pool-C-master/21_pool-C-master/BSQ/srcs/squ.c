/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrowzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 20:19:46 by edrowzee          #+#    #+#             */
/*   Updated: 2019/06/26 21:14:13 by edrowzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	ft_print_map(int *arr, char **str, t_fline test)
{
	int i;
	int j;

	i = arr[1] - arr[2] + 1;
	j = arr[0] - arr[2] + 1;
	while (i <= arr[1])
	{
		j = arr[0] - arr[2] + 1;
		while (j <= arr[0])
		{
			str[i][j] = test.c3;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < test.rows_count)
	{
		ft_putstr(str[i]);
		write(1, "\n", 1);
		i++;
	}
}

int		m3(int a, int b, int c)
{
	int result;

	result = 0;
	if (a <= b && a <= c)
		result = a;
	else if (b <= a && b <= c)
		result = b;
	else if (c <= a && c <= b)
		result = c;
	return (result + 1);
}

void	ft_pos_detection(int *pos, int num, int i, int j)
{
	if (num > pos[2])
	{
		pos[2] = num;
		pos[0] = j;
		pos[1] = i;
	}
}

int		**ft_int_arr_init(t_fline test)
{
	int **result;
	int i;

	result = (int**)malloc(sizeof(int*) * test.rows_count);
	i = 0;
	while (i < test.rows_count)
	{
		result[i] = (int*)malloc(sizeof(int) * test.row_len);
		i++;
	}
	return (result);
}

void	ft_count_cells(char **str, t_fline test, int i, int j)
{
	int **arr;
	int pos[3];

	arr = ft_int_arr_init(test);
	pos[2] = 0;
	while (i < test.rows_count)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if (str[i][j] == test.c2)
				arr[i][j] = 0;
			else if (str[i][j] == test.c1 && j != 0 && i != 0)
				arr[i][j] = m3(arr[i - 1][j - 1], arr[i - 1][j], arr[i][j - 1]);
			else
				arr[i][j] = 1;
			ft_pos_detection(pos, arr[i][j], i, j);
			j++;
		}
		i++;
	}
	ft_print_map(pos, str, test);
	mem_free(arr, test);
}
