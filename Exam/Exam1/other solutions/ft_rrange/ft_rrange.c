/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 15:40:55 by exam              #+#    #+#             */
/*   Updated: 2019/08/18 20:19:54 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int len;
	int *tab;
	int i;
	int fl;

	fl = -1;
	if (end >= 0)
		len = end - start + 1;
	else
	{
		fl = 1;
		len = start - end + 1;
	}
	tab = (int *)malloc(sizeof(int) * len);
	i = 0;
	while (tab && i < len)
	{
		tab[i++] = end;
		end += fl;
	}
	return (tab);
}
