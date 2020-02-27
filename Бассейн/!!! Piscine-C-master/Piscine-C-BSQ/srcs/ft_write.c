/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrtie.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 11:51:40 by rfork             #+#    #+#             */
/*   Updated: 2019/08/22 09:09:41 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_write(char **arr, int x, int y, int n)
{
	int i;
	int j;
	int k;
	int m;

	k = n - 1;
	while (k >= 0)
	{
		m = n - 1;
		while (m >= 0)
		{
			arr[y - k + 1][x - m] = g_fu;
			m = m - 1;
		}
		k = k - 1;
	}
	i = 0;
	while (++i < g_h + 1)
	{
		j = 0;
		while (arr[i][j] != '\0')
			write(1, &arr[i][j++], 1);
		write(1, "\n", 1);
	}
	free(arr);
}
