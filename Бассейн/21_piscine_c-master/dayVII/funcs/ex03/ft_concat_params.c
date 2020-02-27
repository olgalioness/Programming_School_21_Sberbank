/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 11:22:21 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/06 12:51:30 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(int argc, char **argv)
{
	int i;
	int j;
	int res;

	i = 1;
	res = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		res += j + 1;
		i++;
	}
	return (res);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		i_res;
	char	*str_res;

	i = 1;
	i_res = 0;
	str_res = (char *)malloc(sizeof(char) * get_size(argc, argv));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str_res[i_res] = argv[i][j];
			i_res++;
			j++;
		}
		str_res[i_res] = '\n';
		i_res++;
		i++;
	}
	str_res[i_res - 1] = '\0';
	return (str_res);
}
