/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:54:32 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/17 12:02:54 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	res = (int*)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		*(res + i) = (*f)(*(tab + i));
	}
	return (res);
}
