/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 10:40:20 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/06 11:38:59 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	while (min != max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
