/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 13:23:43 by cskeleto          #+#    #+#             */
/*   Updated: 2018/08/29 13:34:33 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str)
{
	int nb;

	nb = 0;
	while (str[nb] != '\0')
	{
		nb++;
	}
	return (nb);
}

char	*ft_strlen(char *src)
{
	char	*str;
	int		t_src;
	int		i;

	i = 0;
	t_src = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * t_src + 1));
	while (i < t_src)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}