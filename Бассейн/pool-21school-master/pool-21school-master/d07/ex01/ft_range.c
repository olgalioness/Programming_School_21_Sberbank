/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 23:16:42 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/08 23:38:18 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *rng;
	int i;

	i = 0;
	if (min > max || !(max - min))
	{
		*rng = NULL;
		return (rng);
	}
	else
		rng = (int*)malloc((max - min) * sizeof(int));
	if (rng == 0)
	{
		*rng = NULL;
		return (0);
	}
	while (i < (max - min))
	{
		rng[i] = min + i;
		i++;
	}
	return (rng);
}
