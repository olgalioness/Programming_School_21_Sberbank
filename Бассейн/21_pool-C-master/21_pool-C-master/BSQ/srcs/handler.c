/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:48:28 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/27 11:09:58 by edrowzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*map_open(char *input_file, t_fline test, int i, int len_chars)
{
	int		file;
	char	buff[BUFF_SIZE + 1];
	char	*result;

	if ((i = map_open_count(input_file, test)) == 0)
		return (NULL);
	if ((file = open(input_file, O_RDWR)) == -1)
	{
		errno_errors(errno, test);
		close(file);
		return (NULL);
	}
	result = (char*)malloc(sizeof(char) * i * BUFF_SIZE + 1);
	result[0] = '\0';
	while ((len_chars = read(file, buff, BUFF_SIZE)))
	{
		buff[len_chars] = '\0';
		result = ft_strconcat(result, buff);
	}
	if (close(file) == -1)
	{
		test.error = 1;
		return (NULL);
	}
	return (result);
}

int		errno_errors(int rubb, t_fline test)
{
	if (rubb == 13)
		test.error = 1;
	if (rubb == 2)
		test.error = 1;
	if (rubb == 21)
		test.error = 1;
	return (0);
}

t_fline	check_errors_start(char *str, t_fline test)
{
	if (test.error > 0)
		return (test);
	if (check_no_nums_first(str, test) == 1)
	{
		test.error = 1;
		return (test);
	}
	if (check_rowslen_symbols(str, test, 0, 0) == 1)
		test.error = 1;
	return (test);
}

int		check_no_nums_first(char *str, t_fline test)
{
	int i;

	i = 0;
	if (str[0] == '+')
		i = 1;
	while (i < test.offset - 3)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	if (test.c1 == test.c3)
		return (1);
	if (test.c1 == test.c2)
		return (1);
	if (test.c2 == test.c3)
		return (1);
	return (0);
}

int		check_rowslen_symbols(char *str, t_fline test, int flag, int count)
{
	while (*str != '\n')
		str++;
	str++;
	while (*str != '\0')
	{
		if (*str == '\n')
		{
			if (flag != test.row_len - 1 || flag == 0)
				return (1);
			flag = 0;
			count++;
		}
		else if (*str == test.c1 || *str == test.c2)
		{
			if (*(str + 1) == '\0')
				return (1);
			flag++;
		}
		else
			return (1);
		str++;
	}
	if (count != test.rows_count)
		return (1);
	return (0);
}
