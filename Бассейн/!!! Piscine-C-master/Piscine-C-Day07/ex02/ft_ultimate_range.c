/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:06:10 by rfork             #+#    #+#             */
/*   Updated: 2019/08/08 20:18:05 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (max - min <= 0)
	{
		range = NULL;
		return (0);
	}
	*range = (int*)malloc(sizeof(**range) * (max - min));
	i = 0;
	while (i < max - min)
	{
		range[0][i] = min + i;
		i++;
	}
	return (max - min);
}
