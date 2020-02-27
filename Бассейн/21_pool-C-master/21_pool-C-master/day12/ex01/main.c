/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:15:14 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/19 23:43:21 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		my_validation(int rubb, char *str)
{
	if (rubb == 13)
	{
		write(1, "cat: ", 5);
		ft_putstr(str);
		write(1, ": Permission denied\n", 20);
	}
	if (rubb == 2)
	{
		write(1, "cat: ", 5);
		ft_putstr(str);
		write(1, ": No such file or directory\n", 29);
	}
	if (rubb == 21)
	{
		write(1, "cat: ", 5);
		ft_putstr(str);
		write(1, ": Is a directory\n", 17);
		return (1);
	}
	return (0);
}

int		my_printer(char *str)
{
	char	reader[BUF_SIZE + 1];
	int		opener;
	int		tmp;

	opener = open(str, O_RDONLY);
	if (opener == -1)
	{
		my_validation(errno, str);
		return (0);
	}
	while ((tmp = read(opener, reader, BUF_SIZE)) != '\0')
	{
		if (my_validation(errno, str) == 1)
			return (0);
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
	int i;

	i = 0;
	while (i != argc)
	{
		my_printer(arhv[i]);
		i++;
	}
	return (0);
}
