/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dimension.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 23:18:20 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 00:06:38 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

int	*get_dimension(char *str)
{
	int i;
	int y;
	int x;
	int *dims;

	x = 0;
	y = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	i = 0;
	while (str[i] != '\n')
	{
		x++;
		i++;
	}
	if (ft_strlen(str) % y != 0)
		return ((void*)0);
	dims[0] = x;
	dims[1] = y;
	return (dims);
}
