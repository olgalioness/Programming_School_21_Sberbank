/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 10:28:48 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/06 10:35:39 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	while (src[i] != '\0')
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	while (i >= 0)
	{
		ptr[i] = src[i];
		i--;
	}
	return (ptr);
}
