/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rush01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 21:50:47 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 22:03:53 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "librush.h"

int	check_top01(char *str, int x, int y)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if (str[i] == '/')
	{
		while (str[i] != '\n')
		{
			if (str[i] == '*')
				count++;
			i = i + 1;
		}
		if (count == (x - 2) && str[i - 1] == '\\')
			return (check_middle01(str, i, x, y));
	}
	return (0);
}

int	check_middle01(char *str, int i, int x, int y)
{
	int j;
	int count;

	j = 0;
	while (j < (y - 2))
	{
		i = i + 1;
		count = 0;
		if (str[i] == '*')
		{
			while (str[i] != '\n')
			{
				if (str[i] == ' ')
					count++;
				i = i + 1;
			}
			if (count == (x - 2) && str[i - 1] == '*')
				j++;
			else
				return (0);
		}
	}
	return(check_bottom01(str, i, x));
}

int	check_bottom01(char *str, int i, int x)
{
	int count;

	count = 0;
	i = i + 1;
	if (str[i] == '\\')
	{
		while (str[i] != '\n')
		{
			if (str[i] == '*')
				count++;
			i = i + 1;
		}
		if (count == (x - 2) && str[i - 1] == '/')
			return (1);
	}
	return (0);
}
