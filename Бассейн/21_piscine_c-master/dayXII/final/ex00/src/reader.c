/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 13:17:09 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/13 13:37:12 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

int		read_file(char *file_name)
{
	int		file_d;
	int		pos;
	char	buf[15];

	file_d = open(file_name, O_RDONLY);
	if (file_d == -1)
	{
		put_str("Open() error\n");
		return (0);
	}
	while ((pos = read(file_d, buf, 14)))
	{
		buf[pos] = '\0';
		put_str(buf);
	}
	if (close(file_d) == -1)
	{
		put_str("Close() error\n");
		return (0);
	}
	return (1);
}
