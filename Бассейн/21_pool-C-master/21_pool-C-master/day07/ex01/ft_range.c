/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 20:12:06 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/13 00:14:02 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int i;

	arr = NULL;
	if (min < max)
	{
		i = 0;
		arr = (int*)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			*(arr + i) = min;
			min++;
			i++;
		}
	}
	return (arr);
}
