/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:05:54 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/20 18:50:52 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

#define LINE_FIRST(i, x) (i->map_begin + (x) * (i->line_l + 1))

#define SAFE_OUT(x) ((x) ? (x) : (0))

void	build_dist(char *iter, t_map_info *info, int *dist)
{
	int		i;
	int		ii;

	i = 0;
	while (i < info->line_l)
	{
		ii = i;
		while ((iter + ii) < info->map_end && *(iter + ii) == info->symb[0])
			ii += info->line_l + 1;
		dist[i] = (ii - i) / (info->line_l + 1);
		i++;
	}
}

void	analyze_dist(int *dist, char *iter, t_map_info *info, t_sq *bsq)
{
	int		d_i;
	int		size_shift;
	int		size_limit;

	d_i = 0;
	while (d_i < info->line_l)
	{
		if (dist[d_i] > bsq->size)
		{
			size_shift = 1;
			size_limit = dist[d_i];
			while (d_i + size_shift <= info->line_l)
			{
				if (dist[d_i + size_shift - 1] < size_limit)
					size_limit = dist[d_i + size_shift - 1];
				if (size_shift > size_limit)
					break ;
				size_shift++;
			}
			if (size_shift - 1 > bsq->size)
				update_sq(bsq, size_shift - 1, iter + d_i);
		}
		d_i++;
	}
}

void	solve(t_map_info *info)
{
	char	*iter;
	int		*dist;
	t_sq	*bsq;

	iter = info->map_begin;
	dist = (int *)malloc(sizeof(int) * info->line_l);
	bsq = create_sq();
	while (iter <= LINE_FIRST(info, info->line_n - 1))
	{
		build_dist(iter, info, dist);
		analyze_dist(dist, iter, info, bsq);
		iter += info->line_l + 1;
	}
	write_sq(bsq, info);
	free(bsq);
}
