/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:05:54 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/20 18:49:17 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

t_sq	*create_sq(void)
{
	t_sq *new;

	new = (t_sq *)malloc(sizeof(t_sq));
	new->pos = NULL;
	new->size = 0;
	return (new);
}

void	update_sq(t_sq *sq, int new_size, char *new_pos)
{
	sq->pos = new_pos;
	sq->size = new_size;
}

void	write_sq(t_sq *sq, t_map_info *info)
{
	int		i;
	int		j;

	i = 0;
	while (i < sq->size)
	{
		j = 0;
		while (j < sq->size)
			sq->pos[i * (info->line_l + 1) + j++] = info->symb[2];
		i++;
	}
}
