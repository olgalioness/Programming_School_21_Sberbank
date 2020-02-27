/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 20:32:27 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/09 13:53:24 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	rotare(char c)
{
	int x;
	int step;

	step = 42;
	if (c < 'A' || c > 'z' || (c > 'Z' && c < 'a'))
		return (c);
	if (c > 'a' && c < 'z')
		x = 32;
	else
		x = 0;
	while (step != 0)
	{
		if (c == 'Z' + x)
		{
			c = 'A' + x;
			step--;
		}
		c++;
		step--;
	}
	return (c);
}

char	*ft_rot42(char *str)
{
	int		i;
	char	*res;

	i = 0;
	res = str;
	while (res[i] != '\0')
	{
		res[i] = rotare(str[i]);
		i++;
	}
	return (res);
}
