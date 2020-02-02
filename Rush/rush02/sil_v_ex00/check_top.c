/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 00:53:37 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 19:29:58 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int check_middle(char *str, int i, int x, int y);
int check_bottom(char *str, int i, int x);

int	check_top(char *str, int x, int y)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if (str[i] == 'o')
	{
		while (str[i] != '\n')
		{
			if (str[i] == '-')
				count++;
			i = i + 1;
		}
		if (count == (x - 2) && str[i - 1] == 'o')
		{
			return (check_middle(str, i, x, y));
		}
	}
	return (0);
}

int	check_middle(char *str, int i, int x, int y)
{
	int j;
	int count;
	j = 0;
	while (j < (y - 2))
	{
		i = i + 1;
		count = 0;
		if (str[i] == '|')
		{
			while (str[i] != '\n')
			{
				if (str[i] == ' ')
					count++;
				i = i + 1;
			}
			if (count == (x - 2) && str[i - 1] == '|')
				j++;
			else
				return (0);
		}
	}
	return(check_bottom(str, i, x));
}

int	check_bottom(char *str, int i, int x)
{
	int count;

	count = 0;
	i = i + 1;
	if (str[i] == 'o')
	{
		while (str[i] != '\n')
		{
			if (str[i] == '-')
				count++;
			i = i + 1;
		}
		if (count == (x - 2) && str[i - 1] == 'o')
			return (1);
	}
	return (0);
}
