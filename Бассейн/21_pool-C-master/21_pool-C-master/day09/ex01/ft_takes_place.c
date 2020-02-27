/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:22:15 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/13 18:11:37 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		my_fun_hours(int hour)
{
	int format;

	if (hour == 0)
		return (12);
	if (hour > 12)
		format = hour - 12;
	else
		format = hour;
	return (format);
}

void	ft_takes_place(int hour)
{
	if (hour < 0 || hour > 24)
		return ;
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", my_fun_hours(hour));
	printf("%s", ".00 ");
	if (hour >= 12 && hour < 24)
		printf("%s", "P.M. AND ");
	else
		printf("%s", "A.M. AND ");
	if (hour == 24)
		printf("%d", 1);
	else
		printf("%d", my_fun_hours(hour + 1));
	if (hour + 1 >= 12 && hour + 1 < 24)
		printf("%s", ".00 P.M.");
	else
		printf("%s", ".00 A.M.");
	printf("%s", "\n");
}
