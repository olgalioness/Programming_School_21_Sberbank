/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 21:54:49 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/27 22:13:26 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *result;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	result = (int *)malloc(sizeof(*result) * (max - min));
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	*range = result;
	return (i);
}
