/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 18:10:55 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/18 21:30:36 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_put.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (sizeof(dest)/sizeof(char) - ft_strlen(dest) - 1 < ft_strlen(src))
	{
		*dest = '\0';
		return (dest);
	}
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
