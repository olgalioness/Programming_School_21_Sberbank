/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 16:45:46 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/15 22:07:30 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	char	c;
	int		i;
	int		fd;

	i = 1;
	while (i < argc)
	{
		if ((fd = open(argv[i], O_RDWR)) == -1)
		{
			ft_check(errno, argv[i]);
			close(fd);
		}
		else
			while (read(fd, &c, 1) != 0)
				write(STD_OUT, &c, 1);
		if ((fd = close(fd)) == -1)
			ft_check(errno, argv[i]);
		if (fd == -1)
			return (1);
		i++;
	}
	if (argc == 1)
		ft_infi_loop();
	return (0);
}

void	ft_infi_loop(void)
{
	char c;

	while (read(STD_IN, &c, 1))
		write(STD_OUT, &c, 1);
}

void	ft_check(int err, char *name)
{
	ft_puts(STD_OUT, "ft_cat: ");
	ft_puts(STD_OUT, name);
	if (err == EISDIR)
		ft_puts(STD_OUT, ": Is a directory\n");
	else if (err == EACCES)
		ft_puts(STD_OUT, ": Permission denied\n");
	else if (err == ENOENT)
		ft_puts(STD_OUT, ": No such file or directory\n");
	return ;
}

void	ft_puts(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
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
