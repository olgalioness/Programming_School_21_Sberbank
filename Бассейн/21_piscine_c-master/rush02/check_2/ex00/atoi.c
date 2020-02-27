/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:53:40 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 23:08:43 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_head.h"

int		ft_is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	if (c == ' ')
	{
		return (1);
	}
	return (0);
}

int		ft_is_sign(char c)
{
	if (c == '+' || c == '-')
	{
		return (1);
	}
	return (0);
}

int		ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (ft_is_space(str[i]))
	{
		i++;
	}
	if (ft_is_sign(str[i]))
	{
		sign = str[i++] == '-' ? -1 : 1;
	}
	while (ft_is_digit(str[i]))
	{
		sum = sum * 10 + str[i++] - 48;
	}
	return (sign * sum);
}
