/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:03:59 by lulee             #+#    #+#             */
/*   Updated: 2019/09/16 16:05:54 by lulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*interval;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	interval = (int *)malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		interval[i] = min;
		min++;
		i++;
	}
	interval[i] = '\0';
	return (interval);
}
