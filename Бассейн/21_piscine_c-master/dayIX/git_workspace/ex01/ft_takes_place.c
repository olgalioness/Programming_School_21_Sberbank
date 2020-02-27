/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 17:23:36 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/07 18:05:13 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_time(int h)
{
	if (h == 12)
		printf("12 P.M. ");
	else if (h == 0)
		printf("12 A.M. ");
	else if (h == 24)
		printf("12 A.M ");
	else if (h < 12 && h > 0)
		printf("%d A.M. ", h);
	else
		printf("%d P.M. ", h - 12);
}

void	ft_takes_place(int hour)
{
	int next_hour;

	if (hour == 0)
		next_hour = 1;
	else
		next_hour = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	print_time(hour);
	printf("AND ");
	print_time(next_hour);
	printf("\n");
}
