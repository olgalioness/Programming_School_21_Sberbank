/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhoster <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:14:38 by bhoster           #+#    #+#             */
/*   Updated: 2019/06/23 22:24:55 by atama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc.h"

void		print_line03(int x, char c, t_list **rlist)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		el_push_back(rlist, c);
		i++;
	}
}

void		func03(int *q, int x, int y, t_list **rlist)
{
	while (*q < y)
	{
		print_line03(1, 'B', rlist);
		print_line03(((x >= 2) ? x - 2 : x - 1), ' ', rlist);
		(x >= 2) ? print_line03(1, 'B', rlist) : 0;
		el_push_back(rlist, '\n');
		*q = *q + 1;
	}
}

t_list		*rush03(int x, int y)
{
	int		i;
	int		q;
	t_list	*rlist;

	i = 1;
	q = 1;
	rlist = NULL;
	if (x <= 0 || y <= 0)
		return (NULL);
	print_line03(1, 'A', &rlist);
	print_line03(((x >= 2) ? x - 2 : x - 1), 'B', &rlist);
	(x >= 2) ? print_line03(1, 'C', &rlist) : 0;
	el_push_back(&rlist, '\n');
	q = 2;
	func03(&q, x, y, &rlist);
	if (y == 1)
		return (rlist);
	print_line03(1, 'A', &rlist);
	print_line03(((x >= 2) ? x - 2 : x - 1), 'B', &rlist);
	(x >= 2) ? print_line03(1, 'C', &rlist) : 0;
	el_push_back(&rlist, '\n');
	return (rlist);
}
