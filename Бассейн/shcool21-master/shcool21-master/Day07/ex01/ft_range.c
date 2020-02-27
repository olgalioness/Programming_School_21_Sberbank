/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 16:45:33 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/27 22:13:08 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
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
	return (result);
}
