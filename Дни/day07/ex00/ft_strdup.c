/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 06:05:38 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/21 06:05:38 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i] != '\0')
    {
        i++;
    }

	dst = (char *)malloc(i + 1);
	while(i >= 0)
	{
		dst[i] = src[i];
		i--;
	}
	return(dst);
}