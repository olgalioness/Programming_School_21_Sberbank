/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:45:02 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/19 18:13:03 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"

void	ft_printtab(t_map *mp)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < mp->size)
	{
		j = 0;
		while (j < mp->size)
		{
			if (mp->map[i][j] == 0)
				ft_putchar(*mp->obstacle);
			else if (mp->map[i][j] == -2)
				ft_putchar(*mp->full);
			else
				ft_putchar(*mp->empty);
			j++;
		}
		i++;
	}
}