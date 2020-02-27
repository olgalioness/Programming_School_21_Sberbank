/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:29:07 by rfork             #+#    #+#             */
/*   Updated: 2019/08/15 22:47:58 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int	ft_strlen(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		k = k + 1;
		i++;
	}
	return (k);
}

int	ft_errno_check(int error, int i, char **argv)
{
	if (error == 21)
	{
		write(1, "ft_cat: ", 8);
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, ": Is a directory\n", 17);
		return (1);
	}
	else if (error == 2)
	{
		write(1, "ft_cat: ", 8);
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, ": No such file or directory\n", 28);
		return (1);
	}
	else if (error == 13)
	{
		write(1, "ft_cat: ", 8);
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, ": Permission denied\n", 20);
		return (1);
	}
	return (0);
}

int	ft_cat(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[30000];

	i = 1;
	while (i < argc)
	{
		ret = 1;
		fd = open(argv[i], O_RDWR);
		if (ft_errno_check(errno, i, argv) == 1)
			return (0);
		else
			while ((ret = read(fd, buf, 1)))
				write(1, &buf, 1);
		if (close(fd) == -1)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		ret;
	char	buf[30000];

	if (argc == 1)
		while ((ret = read(0, buf, 1)) != 0)
			write(1, &buf, 1);
	else if (argc >= 2)
		ft_cat(argc, argv);
	return (0);
}
