/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 13:49:06 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/15 22:07:06 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_check(&fd, argc, argv))
		return (1);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_puts(STD_OUT, buf);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}

int		ft_check(int *fd, int argc, char **argv)
{
	*fd = open(argv[1], O_RDONLY);
	if (argc > 2)
		ft_puts(STD_OUT, "Too many arguments.\n");
	else if (argc == 1)
		ft_puts(STD_OUT, "File name missing.\n");
	else if (*fd == -1)
		return (1);
	else
		return (0);
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	i++;
	return (i);
}

void	ft_puts(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}
