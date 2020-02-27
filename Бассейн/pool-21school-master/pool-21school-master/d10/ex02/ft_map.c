/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:38:16 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/13 22:07:00 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*rtn;
	int		i;

	i = 0;
	rtn = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		rtn[i] = f(tab[i]);
		i++;
	}
	return (rtn);
}
