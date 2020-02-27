/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 14:59:22 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/27 16:12:22 by jjerde           ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	char	*str2;

	i = 0;
	if (src != '\0' &&
			!(str2 = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	else
	{
		while (src[i])
		{
			str2[i] = src[i];
			i++;
		}
		str2[i] = '\0';
	}
	return (str2);
}
