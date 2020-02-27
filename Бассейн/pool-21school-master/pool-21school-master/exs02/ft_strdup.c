/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 10:46:50 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 11:14:22 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char *rst;
	int i;

	i = 0;
	rst = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		rst[i] = str[i];
		i++;
	}
	rst[i] = '\0';
	return (rst);
}
