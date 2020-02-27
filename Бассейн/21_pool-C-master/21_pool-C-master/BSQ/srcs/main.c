/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrowzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 12:08:59 by edrowzee          #+#    #+#             */
/*   Updated: 2019/06/26 21:56:11 by edrowzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		detect_max_str_len(char *str, int i)
{
	int temp;
	int result;

	temp = 0;
	result = 0;
	if (!str)
		return (0);
	while (*str != '\n')
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			result = (result > temp) ? result : temp;
			temp = 0;
		}
		temp++;
		i++;
	}
	return (result);
}

t_fline	detect_map_params(char *str, int i)
{
	t_fline	result;

	result.error = 0;
	if ((result.row_len = detect_max_str_len(str, 0)) == 0)
	{
		result.error = 1;
		return (result);
	}
	while (str[i] != '\n')
		i++;
	if (i < 4)
	{
		result.error = 1;
		return (result);
	}
	result.c1 = str[i - 3];
	result.c2 = str[i - 2];
	result.c3 = str[i - 1];
	str[i - 3] = '\0';
	result.rows_count = ft_atoi(str);
	str[i - 3] = result.c1;
	result.offset = i;
	return (result);
}

char	**create_arr(char *str, t_fline test)
{
	char	**result;
	int		i;

	i = 0;
	result = (char**)malloc(sizeof(char*) * test.rows_count);
	str = str + test.offset;
	result[0] = str;
	while (*str != '\0')
	{
		if (*str == '\n')
		{
			*str = '\0';
			str++;
			result[i] = str;
			i++;
			continue ;
		}
		str++;
	}
	return (result);
}

int		starter(int argc, char *argv[], int i)
{
	t_fline	test;
	char	*str;
	char	**arr;

	test.error = 0;
	if (argc == 1)
		str = map_open_from_console();
	else
		str = map_open(argv[i], test, 0, 0);
	test = detect_map_params(str, 0);
	test = check_errors_start(str, test);
	if (test.error > 0)
	{
		write(2, "map error\n", 10);
		if (i < argc - 1)
			write(1, "\n", 1);
		return (1);
	}
	arr = create_arr(str, test);
	ft_count_cells(arr, test, 0, 0);
	free(arr);
	free(str);
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		err;

	i = 1;
	while (i < argc)
	{
		err = starter(argc, argv, i);
		if (err > 0)
		{
			i++;
			continue ;
		}
		if (i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
	if (argc == 1)
		err = starter(argc, argv, i);
	return (0);
}
