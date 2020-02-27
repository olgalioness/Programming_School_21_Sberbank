/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 13:51:20 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/07 21:11:21 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		int_checking(int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
		return (0);
	while (min < max)
	{
		if (i == 2147483646)
			return (0);
		i++;
		min++;
	}
	return (1);
}

int		*ft_range(int min, int max)
{
	int	quantity;
	int	index;
	int	*ptr;

	index = 0;
	if (int_checking(min, max) == 0)
		return (0);
	quantity = max - min;
	ptr = (int*)(malloc(sizeof(min) * quantity));
	if (!ptr)
		return (0);
	while (index < quantity)
	{
		ptr[index] = min + index;
		index++;
	}
	return (ptr);
}
