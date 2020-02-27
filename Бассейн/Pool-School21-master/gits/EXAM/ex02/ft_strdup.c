/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:44:22 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/21 16:55:28 by snorcros         ###   ########.fr       */
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

	lenght = 0;
	i = 0;
	ans = (char *)malloc(sizeof(char) * lenght + 1);
	while (src[i] != '\0')
	{
		ans[i] = src[i];
		i++;
	}
	ans[i] = src[i];
	return (ans);
}

