/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rush02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 21:45:38 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 23:34:03 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "librush.h"

int	check_top02(char *str, int x, int y)
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
		if (count == (x - 2) && str[i - 1] == 'A')
			return (check_middle02(str, i, x, y));
	}
	return (0);
}

int	check_middle02(char *str, int i, int x, int y)
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
	return(check_bottom02(str, i, x));
}

int	check_bottom02(char *str, int i, int x)
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
		if (count == (x - 2) && str[i - 1] == 'C')
			return (1);
	}
	return (0);
}
