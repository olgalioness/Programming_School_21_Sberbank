/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 13:00:53 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/11 22:03:39 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

char	***ft_memory_allocation()
{
	int		i;
	int		j;
	char	***str_3d;

	i = 0;
	str_3d = (char***)malloc(sizeof(char**) * (N + 1));
	while (i < N)
	{
		j = 0;
		str_3d[i] = (char**)malloc(sizeof(char*) * (N + 1));
		while (j < N)
		{
			str_3d[i][j] = (char*)malloc(sizeof(char) * (N + 1));
			j++;
		}
		i++;
	}
	return (str_3d);
}

void	ft_all_value(char ***str_3d, char **argv, int j, int k)
{
	int i;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '.')
			{
				k = 0;
				while (k < (N + 1))
				{
					str_3d[i - 1][j][k] = '0' + k;
					k++;
				}
				str_3d[i - 1][j][k] = '\0';
			}
			else
				str_3d[i - 1][j][0] = argv[i][j];
			j++;
		}
		i++;
	}
}
