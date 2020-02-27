/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:25:52 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/15 19:17:13 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int		read_file(char *name_file)
{
	int		fd;
	int		rd;
	char	str[BUFF + 1];

	fd = open(name_file, O_RDWR);
	if (fd < 0)
		return (1);
	rd = read(fd, str, BUFF);
	while (rd > 0)
	{
		str[rd] = '\0';
		ft_putstr(str);
		rd = read(fd, str, BUFF);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}

void	check_errno(char *name)
{
	if (errno == 2)
	{
		ft_putstr("cat: ");
		ft_putstr(name);
		ft_putstr(": No such file or directory\n");
	}
	else if (errno == 13)
	{
		ft_putstr("cat: ");
		ft_putstr(name);
		ft_putstr(": Permission denied\n");
	}
	else if (errno == 21)
	{
		ft_putstr("cat: ");
		ft_putstr(name);
		ft_putstr(": Is a directory\n");
	}
}

void	cat_file(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc - 1)
	{
		i = 1;
		while (i < argc)
		{
			read_file(argv[i]);
			check_errno(argv[i]);
			i++;
		}
	}
	else
	{
		while (read(1, &c, 1))
			write(1, &c, 1);
	}
}
