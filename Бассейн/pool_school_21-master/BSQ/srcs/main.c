/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:59:17 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/19 18:47:45 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"

int		main()
{
	t_map *test;
	test = (t_map *)malloc(sizeof(t_map));
	int **line;
	line = (int **)malloc(sizeof(int *) * 6);
	for (int i = 0; i < 6; i++)
		line[i] = (int *)malloc(sizeof(int) * 6);
	line[6][6] =	[[-1, -1, -1, -1, -1, -1],
						[-1, -1, -1, 0, -1, -1],
						[0, -1, -1, -1, 0, 0],
						[-1, -1, -1, 0, -1, -1],
						[-1, -1, -1, -1, -1, -1],
						[-1, -1, -1, 0, -1, -1]];
	test->size = 6;
	test->empty = "*";
	test->obstacle = "o";
	test->full = "#";
	test->map = line;
	bsq(test);
	ft_printtab(test);
	return (0);
}