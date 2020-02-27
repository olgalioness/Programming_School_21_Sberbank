/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:23:29 by rfork             #+#    #+#             */
/*   Updated: 2019/08/13 14:22:18 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int *a;
	int i;

	i = 0;
	a = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		a[i] = f(tab[i]);
		i++;
	}
	return (a);
}
