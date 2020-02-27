/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 20:45:31 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/09 13:24:22 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	else
		return (0);
}

void	set_arr_matr(char *str, int **arr, char ***matr)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && is_separator(str[i]) == 0) ||
			(is_separator(str[i - 1]) == 1 && is_separator(str[i]) == 0))
			k++;
		i++;
	}
	*arr = (int *)malloc(sizeof(int) * (k * 2 + 1));
	(*matr) = (char **)malloc(sizeof(char *) * (k + 1));
}

void	fill_arr(char *str, int **arr)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (is_separator(str[0]) == 0)
			{
				(*arr)[k] = i;
				k++;
			}
		}
		else if (((is_separator(str[i - 1]) == 1 && is_separator(str[i]) == 0))
			|| (is_separator(str[i - 1]) == 0 && is_separator(str[i]) == 1))
		{
			(*arr)[k] = i;
			k++;
		}
		i++;
	}
	(*arr)[k] = i;
	(*arr)[k + 1] = -1;
}

void	fill_matr(int **arr, char *str, char ***matr)
{
	int arr_i;
	int matr_i;
	int m_str_i;
	int str_i;

	arr_i = 0;
	matr_i = 0;
	while ((*arr)[arr_i] != -1 && str[(*arr)[arr_i]] != '\0')
	{
		(*matr)[matr_i] = (char *)malloc(sizeof(char) *
				((*arr)[arr_i + 1] - (*arr)[arr_i]));
		str_i = (*arr)[arr_i];
		m_str_i = 0;
		while (str_i < (*arr)[arr_i + 1])
		{
			(*matr)[matr_i][m_str_i] = str[str_i];
			str_i++;
			m_str_i++;
		}
		(*matr)[matr_i][m_str_i] = 0;
		matr_i++;
		arr_i += 2;
	}
	(*matr)[matr_i] = NULL;
}

char	**ft_split_whitespaces(char *str)
{
	char	**matr;
	int		*arr;

	matr = NULL;
	arr = NULL;
	set_arr_matr(str, &arr, &matr);
	fill_arr(str, &arr);
	fill_matr(&arr, str, &matr);
	return (matr);
}
