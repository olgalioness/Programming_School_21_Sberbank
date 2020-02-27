/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:50:56 by lulee             #+#    #+#             */
/*   Updated: 2019/09/12 18:03:19 by lulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*strdup;
	int		len;

	len = 0;
	while (src[len])
		len++;
	strdup = (char *)malloc(sizeof(*strdup) * (len + 1));
	len = 0;
	while (src[len])
	{
		strdup[len] = src[len];
		len++;
	}
	strdup[len] = '\0';
	return (strdup);
}
