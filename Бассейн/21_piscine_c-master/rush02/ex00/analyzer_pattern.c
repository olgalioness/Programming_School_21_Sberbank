/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyzer_pattern.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:30:05 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 22:50:53 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	clean_tsum(t_tsum *tsum)
{
	tsum->corner_0 = 0;
	tsum->corner_1 = 0;
	tsum->corner_2 = 0;
	tsum->corner_3 = 0;
	tsum->middle_0 = 0;
	tsum->middle_1 = 0;
}

void	fill_patterns_a(t_tsum *p)
{
	p[0].corner_0 = 'o';
	p[0].corner_1 = 'o';
	p[0].corner_2 = 'o';
	p[0].corner_3 = 'o';
	p[0].middle_0 = '-';
	p[0].middle_1 = '|';
	p[1].corner_0 = '/';
	p[1].corner_1 = '\\';
	p[1].corner_2 = '\\';
	p[1].corner_3 = '/';
	p[1].middle_0 = '*';
	p[1].middle_1 = '*';
}

void	fill_patterns_b(t_tsum *p)
{
	p[2].corner_0 = 'A';
	p[2].corner_1 = 'A';
	p[2].corner_2 = 'C';
	p[2].corner_3 = 'C';
	p[2].middle_0 = 'B';
	p[2].middle_1 = 'B';
	p[3].corner_0 = 'A';
	p[3].corner_1 = 'C';
	p[3].corner_2 = 'A';
	p[3].corner_3 = 'C';
	p[3].middle_0 = 'B';
	p[3].middle_1 = 'B';
	p[4].corner_0 = 'A';
	p[4].corner_1 = 'C';
	p[4].corner_2 = 'C';
	p[4].corner_3 = 'A';
	p[4].middle_0 = 'B';
	p[4].middle_1 = 'B';
}

void	fill_matches(int *m)
{
	int i;

	i = 0;
	while (i < 5)
		m[i++] = 1;
}

int		compare_tsum(t_tsum *original, t_tsum *pattern)
{
	if (original->corner_0 != pattern->corner_0 && original->corner_0 != 0)
		return (0);
	if (original->corner_1 != pattern->corner_1 && original->corner_1 != 0)
		return (0);
	if (original->corner_2 != pattern->corner_2 && original->corner_2 != 0)
		return (0);
	if (original->corner_3 != pattern->corner_3 && original->corner_3 != 0)
		return (0);
	if (original->middle_0 != pattern->middle_0 && original->middle_0 != 0)
		return (0);
	if (original->middle_1 != pattern->middle_1 && original->middle_1 != 0)
		return (0);
	return (1);
}
