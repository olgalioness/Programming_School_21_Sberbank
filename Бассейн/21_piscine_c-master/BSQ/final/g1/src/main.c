/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:05:54 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/20 18:54:10 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

t_valid	process_map(int fd)
{
	t_map_info	info;
	char		*map_str;

	if (!(map_str = read_stream(fd)))
		return (error);
	if (is_valid(map_str, &info) == error)
		return (error);
	solve(&info);
	print_str(info.map_begin, info.map_end);
	free(map_str);
	return (ok);
}

t_valid	process_file(char *file_name)
{
	int fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (error);
	if (process_map(fd) == error)
		return (error);
	if (close(fd) == -1)
		return (error);
	return (ok);
}

void	read_from_term(void)
{
	if (process_map(0) == error)
		print_error();
}

void	read_from_file(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
		if (process_file(av[i++]) == error)
			print_error();
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		read_from_term();
	else
		read_from_file(argc, argv);
	return (0);
}
