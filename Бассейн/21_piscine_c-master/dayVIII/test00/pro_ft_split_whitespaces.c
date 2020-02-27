/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 20:45:31 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/08 17:07:42 by bshanae          ###   ########.fr       */
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

#include <stdio.h> // !!!

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
		{ k++; printf("SAM : Word starts with char {%c}(%d)\n", str[i], i); }
		i++;
	}
	*arr = (int *)malloc(sizeof(int) * (k * 2 + 1));
	(*matr) = (char **)malloc(sizeof(char *) * (k + 1));
	printf("SAM : Array size = %d, matr size =  %d\n", 2*k+1, k+1); // !!!
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
				printf("FA : mark 0\n"); // !!!
				(*arr)[k] = i;
				k++;	
			}
		}
		else if (((is_separator(str[i - 1]) == 1 && is_separator(str[i]) == 0)) ||
				(is_separator(str[i - 1]) == 0 && is_separator(str[i]) == 1))
		{
			printf("FA : new mark on {%c}(%d)\n", str[i], i); // !!!
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
		(*matr)[matr_i] = (char *)malloc(sizeof(char) * ((*arr)[arr_i + 1] - (*arr)[arr_i]) + 1);
		printf("FA : string was allocated within %d char-s\n", ((*arr)[arr_i + 1] - (*arr)[arr_i]) + 1);
		str_i = (*arr)[arr_i];
		printf("str_i = %d, matr_i = %d, arr_i = %d\n", str_i, matr_i, arr_i); // !!!
		m_str_i = 0;
		while (str_i < (*arr)[arr_i + 1])
		{
			printf("Adding new char to matr[%d][%d] = %c\n", matr_i, m_str_i, str[str_i]); // !!!
			(*matr)[matr_i][m_str_i] = str[str_i];
			str_i++;
			m_str_i++;
		}
		printf("FA : putting terminator on %d position\n", m_str_i);
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

	for (int i = 0; str[i] != '\0' && i < 100; i++)
		printf("%d : {%c}\n", i, str[i]); // !!!
	printf("\n"); //!!!
	matr = NULL;
	arr = NULL;
	set_arr_matr(str, &arr, &matr);
	fill_arr(str, &arr);
	printf("Arr = "); //
	for (int i = 0; arr[i] != -1 && i < 50; i++) //
		printf("%d ", arr[i]); //
	printf("\n\n");
	fill_matr(&arr, str, &matr);
	for (int i = 0; matr[i]; i++)
		printf("%d : %s\n", i, matr[i]);
	return (matr);
}


