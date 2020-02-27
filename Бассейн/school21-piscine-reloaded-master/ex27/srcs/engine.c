/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:17:17 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/02 17:26:17 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "typedefs.h"
#include "output.h"

void	process(char *path)
{
	int		fd;
	int		read_length;
	char	buf[BUFFER_SIZE + 1];

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(2, "No such file found.\n");
		return ;
	}
	while ((read_length = read(fd, buf, BUFFER_SIZE)))
	{
		buf[read_length] = '\0';
		write(1, buf, read_length);
	}
}
