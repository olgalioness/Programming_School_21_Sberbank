/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:48:46 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/13 15:25:09 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *ans;
	int i;

	i = 0;
	ans = (int*)malloc(sizeof(int) * length);
	if (ans == NULL)
		return (NULL);
	while (i < length)
	{
		ans[i] = f(tab[i]);
		i++;
	}
	return (ans);
}
