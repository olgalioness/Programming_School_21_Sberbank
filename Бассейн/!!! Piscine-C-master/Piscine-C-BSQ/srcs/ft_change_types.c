/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_types.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:16:06 by rfork             #+#    #+#             */
/*   Updated: 2019/08/21 20:47:12 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_change_types(char **arr)
{
	int	i;
	int	j;
	int	**arr2;

	i = 0;
	arr2 = (int**)malloc(sizeof(int*) * g_h);
	while (i < g_h)
	{
		j = 0;
		arr2[i] = (int*)malloc(sizeof(int) * g_l);
		while (j < g_l)
		{
			if (arr[i + 1][j] == g_em)
				arr2[i][j] = 1;
			if (arr[i + 1][j] == g_ob)
				arr2[i][j] = 0;
			j++;
		}
		i++;
	}
	arr2 = bsq(arr2);
	ft_fn(arr, arr2);
}
