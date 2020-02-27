/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:37:45 by cskeleto          #+#    #+#             */
/*   Updated: 2018/08/30 20:08:57 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_validator(hour)
{
	if (hour >= 13)
	{
		return (hour - 12);
	} else if (hour < 1)
	{
		return (hour + 12);
	}
	else
	{
		return (hour);
	}
}

void	ft_takes_place(int time)
{
	int hour_s;
	int hour_e;

	hour_s = ft_validator(time);
	time++;
	hour_e = ft_validator(time);
	time--;
	if (time == 23)
	{
		printf("The time is %d P.M. AND %d A.M.\n", hour_s, hour_e);
	}
	else if (time >= 12 && time < 24)
	{
		printf("The time is %d P.M. AND %d P.M.\n", hour_s, hour_e);
	}
	else if (time == 11)
	{
		printf("The time is %d A.M. AND %d P.M.\n", hour_s, hour_e);
	}
	else if (time < 12 && time >= 0)
	{
		printf("The time is %d A.M. AND %d A.M.\n", hour_s, hour_e);
	}
}
