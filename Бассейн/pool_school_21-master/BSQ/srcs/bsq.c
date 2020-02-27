/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:47:12 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/19 18:26:01 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"

int		min2_2(t_map *mp, int i, unsigned int j)
{
	int min;

	min = mp->map[i - 1][j - 1];
	if (min > mp->map[i - 1][j])
		min = mp->map[i - 1][j];
	if (min > mp->map[i][j - 1])
		min = mp->map[i][j - 1];
	return (min);
}

void	paint_over(t_map *mp, unsigned int i_m,
		unsigned int j_m, unsigned int max)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < max)
	{
		j = 0;
		while (j < max)
		{
			mp->map[i_m - i][j_m - j] = -2;
			j++;
		}
		i++;
	}
}

void	find_max(t_map *mp, int max)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < mp->size)
	{
		j = 0;
		while (j < mp->size)
		{
			if (mp->map[i][j] == max)
			{
				paint_over(mp, i, j, max);
				break ;
			}
			j++;
		}
		if (j != mp->size)
			break ;
		i++;
	}
}

void	bsq(t_map *mp)
{
	unsigned int	i;
	unsigned int	j;
	int				max;

	i = 0;
	while (i < mp->size)
	{
		if (mp->map[i][0] != 0)
			mp->map[i][0] = 1;
		if (mp->map[0][i] != 0)
			mp->map[0][i] = 1;
		i++;
	}
	i = 1;
	max = 1;
	while (i < mp->size)
	{
		j = 1;
		while (j < mp->size)
		{
			if (mp->map[i][j] == 0)
				break ;
			mp->map[i][j] = min2_2(mp, i, j) + 1;
			if (max < mp->map[i][j])
				max = mp->map[i][j];
			j++;
		}
		i++;
	}
	find_max(mp, max);	
}