/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:23:32 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/20 21:36:35 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	return_error()
{
	char	*err;
	err = "map error";
	write(2, err, 9);
	exit(0);
}

int		main(int argc, char **argv)
{
	int		fd;

	if (argc == 1)
		read_from(0);
	else
		while (**argv)
		{
			if ((fd = open(*argv, O_RDONLY)) != -1)
				read_from(fd);
			clode(fd);
			(*argv)++;
		}
}

#define FD 0
#define X 1
#define Y 2
#define LINE_COUNT 3
#define LINE_LEN 4

#define C 0
#define SPACE 1
#define OBSTACLE 2
#define FILL 3

void	read_from(int fd)
{
	int		ints[5];
	int		**imap;
	char	symbol;

	read_legend();

	/* read_first_line();  */

	int a = read(fd, &symbols[0], 1);
	while(a != 0 && a != '\n')
	{
		first_line(imap, index, symbols);
		a = read(fd, &symbols[0], 1);
	}
	line_count++;


	while (read(fd, &symbols[0], 1) != 0)
	{
		if(artem(&map, &new_map, c, index, &line_len, sym_table))
		{
			in_loop(&map, &new_map, index, line_len);
		}
		else
		{
			
		}
		index++;
	}
	return ;
}

void	read_legend(int *ints, char *symbols)
{
	int		a;

	/* atoi */
	a = read(ints[FD], &symbols[C], 1);
	while ( a > 0 && symbols[C] > '0' && symbols[C] < '9')
	{
		ints[LINE_COUNT] = ints[LINE_COUNT] * 10 + symbols[C] - '0';
		a = read(ints[FD], &symbols[C], 1);
	}
	/* symbols[] filling */
	symbols[SPACE] = symbols[C];
	read(ints[FD], &symbols[C], 1);
	symbols[OBSTACLE] = symbols[C];
	read(ints[FD], &symbols[C], 1);
	symbols[FILL] = symbols[C];
	/* map error checks */
	(symbols[C] == '\n' || symbols[C] == '\0') ? return_error() : 777;
	read(ints[FD], &symbols[C], 1);
	(symbols[C] != '\n') ? return_error() : 777;
	return ;
}

void	read_line(int *ints, char *symbols)
{
	int		a;

	a = read(ints[FD], &symbols[C], 1);
	while ( a > 0 && symbols[C] > '0' && symbols[C] < '9')
	{
		ints[LINE_LEN]++;
	}
}
