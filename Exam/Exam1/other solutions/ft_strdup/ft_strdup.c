/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 17:31:10 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 17:37:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ans;
	int		i;
	int		lenght;

	i = 0;
	lenght = len(src);
	ans = (char *)malloc(sizeof(char) * lenght + 1);
	while (src[i] != '\0')
	{
		ans[i] = src[i];
		i++;
	}
	ans[i] = src[i];
	return (ans);
}
