/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 15:06:18 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/08 22:10:24 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	len;
	int				*array;
	unsigned int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	array = (int*)malloc(sizeof(int) * len);
	while (i < len)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
