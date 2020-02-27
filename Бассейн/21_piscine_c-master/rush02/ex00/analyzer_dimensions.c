/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyzer_dimensions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:29:40 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 22:29:41 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int		get_height(char *str, int w)
{
	int	i;
	int j;
	int h;

	i = 0;
	j = 0;
	h = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (j != w)
				return (-1);
			else
				j = 0;
			h++;
		}
		else
			j++;
		i++;
	}
	return (h);
}

int		get_width(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}
