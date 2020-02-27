/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:03:10 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/08 23:39:42 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sum_len_par(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	int		j;
	char	*str;
	char	*ptr;

	size = ft_sum_len_par(argc, argv);
	argc = 1;
	str = (char*)malloc(size * sizeof(char));
	ptr = str;
	while (argv[argc])
	{
		j = 0;
		while (argv[argc][j])
		{
			*str = argv[argc][j];
			j++;
			str++;
		}
		*str = '\n';
		str++;
		argc++;
	}
	return (ptr);
}

int		ft_sum_len_par(int argc, char **argv)
{
	int i;
	int n;

	argc--;
	n = 0;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i])
		{
			i++;
			n++;
		}
		n++;
		argc--;
	}
	return (n);
}
