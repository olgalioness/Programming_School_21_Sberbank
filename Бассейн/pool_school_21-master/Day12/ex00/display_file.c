/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:25:52 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/15 18:04:48 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int		read_file(char *name_file)
{
	int		fd;
	int		rd;
	char	str[BUFF + 1];

	fd = open(name_file, O_RDONLY);
	if (fd < 0)
		return (1);
	rd = read(fd, str, BUFF);
	while (rd > 0)
	{
		str[rd] = '\0';
		ft_putstr(str);
		rd = read(fd, str, BUFF);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
