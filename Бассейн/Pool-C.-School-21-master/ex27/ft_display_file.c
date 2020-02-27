/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:45:37 by pben              #+#    #+#             */
/*   Updated: 2018/11/26 20:10:53 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_inc.h"
#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int		file;
	int		readd;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc == 2)
	{
		file = open(argv[1], O_RDONLY);
		if (file == -1)
			return (1);
		while ((readd = read(file, buf, BUF_SIZE)))
		{
			buf[readd] = '\0';
			write(1, buf, readd);
		}
		if (close(file) == -1)
			return (1);
	}
	return (0);
}
