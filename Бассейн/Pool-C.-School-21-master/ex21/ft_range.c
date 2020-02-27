/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:38:22 by pben              #+#    #+#             */
/*   Updated: 2018/11/25 16:38:25 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*str;
	int		i;

	if (min >= max)
		return (0);
	str = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
