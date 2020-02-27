/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 22:44:08 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/13 00:15:44 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		memory(int n, char **arr)
{
	int i;
	int j;
	int mem;

	i = 1;
	mem = 0;
	while (i < n)
	{
		j = 0;
		mem++;
		while (*(*(arr + i) + j))
		{
			mem++;
			j++;
		}
		i++;
	}
	return (mem);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*s;
	int		i;
	int		j;
	char	*start;

	if (!memory(argc, argv))
		return (0);
	i = 1;
	s = (char*)malloc(sizeof(char) * memory(argc, argv));
	start = s;
	while (i < argc)
	{
		j = 0;
		while (*(*(argv + i) + j))
		{
			*s++ = *(*(argv + i) + j);
			j++;
		}
		if (i + 1 < argc)
			*s++ = '\n';
		i++;
	}
	*s++ = '\0';
	return (start);
}
