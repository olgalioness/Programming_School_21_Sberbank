/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:15:14 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/08 23:39:41 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int number;

	i = 0;
	number = min;
	if (min >= max || min == -2147483648)
	{
		*range = NULL;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (0);
	while (number < max)
	{
		(*range)[i] = number;
		i++;
		number++;
	}
	return (max - min);
}
