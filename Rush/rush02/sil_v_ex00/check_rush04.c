/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rush04.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 00:53:37 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 22:04:34 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "librush.h"

int	check_top04(char *str, int x, int y)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if (str[i] == 'A')
	{
		while (str[i] != '\n')
		{
			if (str[i] == 'B')
				count++;
			i = i + 1;
		}
		if (count == (x - 2) && str[i - 1] == 'C')
			return (check_middle04(str, i, x, y));
	}
	return (0);
}

int	check_middle04(char *str, int i, int x, int y)
{
	int j;
	int count;

	j = 0;
	while (j < (y - 2))
	{
		i = i + 1;
		count = 0;
		if (str[i] == 'B')
		{
			while (str[i] != '\n')
			{
				if (str[i] == ' ')
					count++;
				i = i + 1;
			}
			if (count == (x - 2) && str[i - 1] == 'B')
				j++;
			else
				return (0);
		}
	}
	return(check_bottom04(str, i, x));
}

int	check_bottom04(char *str, int i, int x)
{
	int count;

	count = 0;
	i = i + 1;
	if (str[i] == 'C')
	{
		while (str[i] != '\n')
		{
			if (str[i] == 'B')
				count++;
			i = i + 1;
		}
		if (count == (x - 2) && str[i - 1] == 'A')
			return (1);
	}
	return (0);
}
