/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 13:18:45 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/22 11:19:31 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFF_SIZE 100

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	read_file(char *name_file)
{
	int		fd;
	int		rd;
	char	buff[BUFF_SIZE + 1];

	fd = open(name_file, O_RDWR);
	if (fd == -1)
		return ;
	rd = read(fd, buff, BUFF_SIZE);
	while (rd)
	{
		buff[rd] = '\0';
		ft_putstr(buff);
		rd = read(fd, buff, BUFF_SIZE);
	}
	if (close(fd) == -1)
	{
		return ;
	}
}

void	check_errno(char *name)
{
	if (errno == 2)
	{
		ft_putstr("cat: ");
		ft_putstr(name);
		ft_putstr(": No such file or directory");
	}
	else if (errno == 13)
	{
		ft_putstr("cat: ");
		ft_putstr(name);
		ft_putstr(": Permission denied");
	}
	else if (errno == 21)
	{
		ft_putstr("cat: ");
		ft_putstr(name);
		ft_putstr(": Is a directory");
	}
}

void	ft_cat(int argc, char **argv)
{
	int		i;
	char	c;

	i = 1;
	if (argc - 1)
	{
		while (i < argc)
		{
			read_file(argv[i]);
			check_errno(argv[i]);
			i++;
		}
	}
	else
	{
		while (read(0, &c, 1) > 0)
			write(1, &c, 1);
	}
}

int		main(int argc, char **argv)
{
	ft_cat(argc, argv);
	return (0);
}
