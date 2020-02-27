/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:49:13 by rfork             #+#    #+#             */
/*   Updated: 2019/08/22 10:55:37 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[8000000];

	i = 0;
	if (argc == 1)
	{
		while ((ret = read(0, buf, 1)) != 0)
			ret = read(0, buf, 8000000);
		buf[ret] = '\0';
		ft_len(buf, ret);
	}
	else if (argc >= 2)
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			ret = read(fd, buf, 8000000);
			buf[ret] = '\0';
			ft_len(buf, ret);
			if (close(fd) == -1)
				return (1);
		}
	return (0);
}
