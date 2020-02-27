/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:23:32 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 11:23:33 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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

void	read_from(int fd)
{
	int		index;
	char    *map;
	int     *new_map;
	char c;

	index = 0;
	while (read(fd, &c, 1) != 0)
	{
		in_loop(map, new_map, intdex, c);
		index++;
	}
}
