/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:40:34 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/08 23:35:21 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		n;

	n = 0;
	while (*src)
	{
		src++;
		n++;
	}
	src = src - n;
	str = (char*)malloc((n + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (*src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	str = str - n;
	return (str);
}
