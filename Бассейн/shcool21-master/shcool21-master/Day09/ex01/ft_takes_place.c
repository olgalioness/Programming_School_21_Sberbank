/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:55:06 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/27 18:19:06 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_answer(int hour, char time_of_day, char time_of_day2)
{
	int h;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 12)
		h = 1;
	else
		h = hour + 1;
	printf("%i.00 ", hour);
	printf("%c.M. AND ", time_of_day);
	printf("%i.00 ", h);
	printf("%c.M.\n", time_of_day2);
}

void	ft_takes_place(int hour)
{
	char time_of_day;
	char time_of_day2;

	time_of_day = 'A';
	time_of_day2 = 'A';
	if (hour == 12 || (hour > 12 && hour < 23))
	{
		if (hour > 12 && hour < 23)
			hour -= 12;
		time_of_day = 'P';
		time_of_day2 = 'P';
	}
	else if (hour == 23)
	{
		hour = 11;
		time_of_day = 'P';
	}
	else if (hour == 11)
		time_of_day2 = 'P';
	else if (hour == 0)
		hour = 12;
	print_answer(hour, time_of_day, time_of_day2);
}
