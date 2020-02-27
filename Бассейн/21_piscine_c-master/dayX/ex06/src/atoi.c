/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:36:38 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 17:07:12 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int		atoi(char *str)
{
	printf("ATOI : income value = %s\n", str);
	int		i;
	int		res;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
	|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = (-1);
		i++;
	}
	if (str[i] == '+')
	{
		i++;
		if (sign == -1)
			return (0);
	}
	while (str[i] >= 48 && str[i] <= 57)
		res = res * 10 + (str[i++] - 48);
	printf("ATOI : result value = %d\n", sign * res);
	return (sign * res);
}
