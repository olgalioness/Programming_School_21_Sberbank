/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:36:25 by rfork             #+#    #+#             */
/*   Updated: 2019/08/15 17:12:43 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[4096];

	ret = 1;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, 1)))
			write(1, &buf, 1);
		if (close(fd) == -1)
			return (1);
	}
	else if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.", 19);
	return (0);
}
