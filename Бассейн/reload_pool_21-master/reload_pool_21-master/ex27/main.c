/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:57:56 by lulee             #+#    #+#             */
/*   Updated: 2019/09/12 20:32:47 by lulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[LEN + 1];

	if (argc == 2)
	{
		if (open(argv[1], O_RDONLY) == -1)
		{
			ft_putstr_error("File name missing.");
			return (-1);
		}
		fd = open(argv[1], O_RDONLY);
		while (ret = read(fd, buf, LEN))
		{
			buf[ret] = '\0';
			ft_putstr_content(buf);
		}
	}
	if (argc == 1)
		ft_putstr_error("File name missing.");
	if (argc > 2)
		ft_putstr_error("Too many arguments.");
	return (0);
}
