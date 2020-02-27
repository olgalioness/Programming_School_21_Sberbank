/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhoster <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:14:38 by bhoster           #+#    #+#             */
/*   Updated: 2019/06/23 21:51:43 by aomega           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

void		print_line(int x, char c, t_list **rlist)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		el_push_back(rlist, c);
		i++;
	}
}

void		func1(int *q, int x, int y, t_list **rlist)
{
	while (*q < y)
	{
		print_line(1, '|', rlist);
		print_line(((x >= 2) ? x - 2 : x - 1), ' ', rlist);
		(x >= 2) ? print_line(1, '|', rlist) : 0;
		el_push_back(rlist, '\n');
		*q = *q + 1;
	}
}

t_list		*rush(int x, int y)
{
	int		i;
	int		q;
	t_list	*rlist;

	i = 1;
	q = 1;
	rlist = NULL;
	if (x <= 0 || y <= 0)
		return (NULL);
	print_line(1, 'o', &rlist);
	print_line(((x >= 2) ? x - 2 : x - 1), '-', &rlist);
	(x >= 2) ? print_line(1, 'o', &rlist) : 0;
	el_push_back(&rlist, '\n');
	q = 2;
	func1(&q, x, y, &rlist);
	if (y == 1)
		return (rlist);
	print_line(1, 'o', &rlist);
	print_line(((x >= 2) ? x - 2 : x - 1), '-', &rlist);
	(x >= 2) ? print_line(1, 'o', &rlist) : 0;
	el_push_back(&rlist, '\n');
	return (rlist);
}
