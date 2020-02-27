/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 11:11:50 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/06 11:13:29 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = (int *)malloc(sizeof(int) * (max - min));
	while (min != max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
