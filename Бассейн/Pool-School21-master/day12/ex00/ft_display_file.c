/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 13:18:45 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/19 17:04:41 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 1024

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

	fd = open(name_file, O_RDONLY);
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

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (argc == 2)
		read_file(argv[1]);
	return (0);
}
