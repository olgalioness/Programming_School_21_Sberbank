/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:19:01 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/13 17:04:40 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#include <stdio.h> // DEV

int		atoi(char *str)
{
	int		i;
	int		res;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
	|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = (-1);
		i++;
	}
	if (str[i] == '+')
	{
		i++;
		if (sign == -1)
			return (0);
	}
	while (str[i] >= 48 && str[i] <= 57)
		res = res * 10 + (str[i++] - 48);
	return (sign * res);
}

void	print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	print_error(char *file_name)
{
	if (errno == 2)
	{
		print("ft_tail: ");
		print(file_name);
		print(": ");
		print("No such file or directory\n"); 
	}
}

int		file_length(char *file_name)
{
	int file_desr;
	int char_i;
	int buf[1];

	file_desr = open(file_name, O_RDWR);
	if (file_desr < 0)
	{
		print_error(file_name);
		return (-1);
	}
	char_i = 0;
	while (read(file_desr, buf, 1))
		char_i++;
	close(file_desr);
	return (char_i);
}

void	print_file(char *file_name, int char_start, int mode)
{
	int file_desr;
	int char_i;
	int buf[1];

	mode = 1; // DEV

	file_desr = open(file_name, O_RDWR);
	char_i = 0;
	while (read(file_desr, buf, 1))
	{
		if (char_i++ >= char_start)
			write(1, &buf[0], 1);
		char_i++;
	}
	close(file_desr);
}

void	print_tail_bytes(char *file_name, int char_limit, int mode)
{
	mode = 1; // DEV			
	int char_total;
	
	char_total = file_length(file_name);
	if (char_total != -1)
		print_file(file_name, char_total - char_limit, mode);
}

int		main(int argc, char **argv)
{
	int char_limit;
	int i;

	if (argc < 4)
		return (0);
	char_limit = atoi(argv[2]);
	i = 3;
	while (i < argc)
		print_tail_bytes(argv[i++], char_limit, (argc > 4));
}
