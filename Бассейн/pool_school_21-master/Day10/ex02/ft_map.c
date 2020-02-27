/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:48:20 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/13 21:30:40 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *array;
	int i;

	i = 0;
	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (array);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
