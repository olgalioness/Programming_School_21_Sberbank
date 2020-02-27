/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:38:31 by rfork             #+#    #+#             */
/*   Updated: 2019/08/08 23:01:52 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		k = k + 1;
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*p;
	int		i;
	int		j;
	int		k;
	int		len;

	k = 0;
	len = 0;
	i = 0;
	len += ft_strlen(argv[i++]);
	i = 1;
	p = (char*)malloc(sizeof(*argv) * (len + argc - 1));
	while (i != argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			p[k++] = argv[i][j++];
		i++;
		p[k++] = '\n';
	}
	p[k] = '\0';
	return (p);
}
