/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 01:15:36 by cerodrig          #+#    #+#             */
/*   Updated: 2018/03/31 20:42:17 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/uio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

#define BUF_SIZE 1024
void	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

void	ft_putchars(int fd, char c)
{
	write(fd, &c, 1);
}

int	main(int argc, char **argv)
{
	int fd;
	char buf[BUF_SIZE + 1];
	int ret = 0;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Failed to create and open the file.\n");
		return (1);
	}

	read(fd, buf, BUF_SIZE);
	ft_putstr(buf);

	close(fd);
	/*ft_putstr(buf); */

/*	if (argc != 2)
	{
		if (argc > 2)
			write(1, "Too many arguments", 18);
		if (argc < 2)
			write(1, "File name missing", 17); 
	}
	whil */

	return (0);
}
