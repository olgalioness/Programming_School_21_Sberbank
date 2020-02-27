/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:22:16 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/19 20:54:10 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c , 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int		open_this_file(char *str)
{
	char	reader[BUF_SIZE + 1];
	int		opener;
	int		tmp;

	opener = open(str, O_RDONLY);
	if (opener == -1)
	{
		write(1, "Open) errors\n", 7);
		return (0);
	}
	while ((tmp = read(opener, reader, BUF_SIZE)) != '\0')
	{
		reader[tmp] = '\0';
		ft_putstr(reader);
	}
	if (close(opener) == -1)
	{
		write(1, "Close() errors\n", 15);
		return (0);
	}
	return (0);
}

int		main(int argc, char **arhv)
{
	if (argc <= 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	open_this_file(arhv[1]);
	return (0);
}
