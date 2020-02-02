/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readtrial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 20:00:01 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 23:37:15 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "librush.h"

#define BUF_SIZE 1

void	ft_putdims(int x, int y)
{
	write(1, " [", 2);
	ft_putnbr(x);
	write(1, "]", 1);
	write(1, " [", 2);
	ft_putnbr(y);
	write(1, "] ", 2);
}
int		main(void)
{
	char *buf;
	int ret;
	int counter;
	int y;
	char *cbuf;

	counter = 0;
	y = 0;
	buf = (char *)malloc(sizeof(*buf) * (BUF_SIZE + 1));
	cbuf = (char *)malloc(sizeof(*cbuf) * (10000 + 1));
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		if (ft_strcmp(buf,"\n") == 0)
			y++;
		cbuf[counter] = *buf;
		counter++;
	}
	if (check_top(cbuf, counter / y - 1, y))
	{
		ft_rush00((counter/y - 1), y);
		return (0);
	}
	if (check_top01(cbuf, counter / y - 1, y))
	{
		ft_rush01((counter/y - 1), y);
		return (0);
	}
	if (check_top02(cbuf, counter / y - 1, y))
	{
		ft_rush02((counter/y - 1), y);
		return (0);
	}
	if (check_top03(cbuf, counter / y - 1, y))
	{
		ft_rush03((counter/y - 1), y);
		return (0);
	}
	if (check_top04(cbuf, counter / y - 1, y))
	{
		ft_rush04((counter/y - 1), y);
		return (0);
	}
	else
			ft_putstr("error\n");
	return (0);
}
