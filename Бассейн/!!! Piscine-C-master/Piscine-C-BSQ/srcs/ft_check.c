/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 16:37:24 by rfork             #+#    #+#             */
/*   Updated: 2019/08/21 22:35:06 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_check(char **arr, int i, int j, int a)
{
	while (arr[0][j] >= '0' && arr[0][j] <= '9')
	{
		a = a * 10 + (arr[0][j] - '0');
		j++;
	}
	if (a != g_h)
		return (1);
	g_em = arr[0][j];
	g_ob = arr[0][j + 1];
	g_fu = arr[0][j + 2];
	while (i < g_h)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			j++;
		}
		if (j != g_l)
			return (1);
		i++;
	}
	return (0);
}
