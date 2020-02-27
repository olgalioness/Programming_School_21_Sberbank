/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 23:12:11 by atama             #+#    #+#             */
/*   Updated: 2019/06/23 23:14:42 by atama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "inc.h"
#include <stdio.h>

t_rushp		get_rush(int var)
{
	if (var == 0)
		return (&rush00);
	if (var == 1)
		return (&rush01);
	if (var == 2)
		return (&rush02);
	if (var == 3)
		return (&rush03);
	if (var == 4)
		return (&rush04);
	return (0);
}

int			check(int var, t_list *input, int x, int y)
{
	t_list	*form;
	t_rushp f;

	f = get_rush(var);
	form = f(x, y);
	return (list_compare(input, form));
}

void		print(int var, int x, int y)
{
	write(1, "[rush-0", 7);
	ft_putnbr(var);
	write(1, "] [", 3);
	ft_putnbr(x);
	write(1, "] [", 3);
	ft_putnbr(y);
	write(1, "]", 1);
}

int			main(void)
{
	t_list	*input;
	int		i;
	int		n;
	int		ix;
	int		iy;

	input = 0;
	ix = 0;
	iy = 0;
	stream_read(&input, &ix, &iy);
	i = 0;
	n = 0;
	while (i < 5)
	{
		if (check(i, input, ix, iy))
		{
			if (n != 0)
				write(1, " || ", 4);
			print(i, ix, iy);
			n++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
