/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 01:00:49 by marvin            #+#    #+#             */
/*   Updated: 2020/01/12 01:00:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		ft_atoi(char *str)
{
	int sign;
	int curr_num;
	int i;

	i = 0;
	curr_num = 0;
	sign = 1;
	while (str[i] < 33)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (curr_num > INT_MAX / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		curr_num = 10 * curr_num + (str[i++] - '0');
	}
	return (curr_num * sign);
}