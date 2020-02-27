/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1_to_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:24:25 by rfork             #+#    #+#             */
/*   Updated: 2019/08/22 09:10:05 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_1_to_2(char *buf, int k, int i)
{
	int		j;
	char	**arr;

	arr = (char**)malloc(sizeof(char*) * (g_h + 1));
	while (i < g_h + 1)
	{
		arr[i] = (char*)malloc(sizeof(char) * (g_l + 1));
		j = 0;
		while (buf[k] != '\n')
		{
			arr[i][j] = buf[k];
			if (arr[i][j] == '\n')
				arr[i][j] = '\0';
			j++;
			k++;
		}
		k++;
		i++;
	}
	if (ft_check(arr, 1, 0, 0) == 1 || g_l < 1)
		write(1, "map error\n", 10);
	else
		ft_change_types(arr);
}
