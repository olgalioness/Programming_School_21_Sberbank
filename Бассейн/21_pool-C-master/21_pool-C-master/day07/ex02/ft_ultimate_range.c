/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 21:22:13 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/12 23:20:43 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tmp;

	if (min < max)
	{
		tmp = (int*)malloc(sizeof(int) * (max - min));
		if (tmp == NULL)
			return (0);
		i = 0;
		while (min < max)
		{
			*(tmp + i) = min++;
			i++;
		}
		*range = tmp;
		return (i);
	}
	return (0);
}
