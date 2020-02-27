/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 09:45:30 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/08 23:39:25 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *q;

	i = 0;
	q = NULL;
	size = max - min;
	if (!size || size < 0)
		return (0);
	*range = (int*)malloc(size * sizeof(int));
	if (*range == 0)
	{
		**range = NULL;
		return (0);
	}
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
