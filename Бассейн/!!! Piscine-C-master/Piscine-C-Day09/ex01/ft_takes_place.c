/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 17:32:48 by rfork             #+#    #+#             */
/*   Updated: 2019/08/08 18:05:23 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour <= 10 && hour >= 1)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",\
	hour, hour + 1);
	if (hour <= 22 && hour >= 13)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",\
	hour, hour + 1);
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 P.M.\n",\
	11, 12);
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 A.M.\n",\
	11, 12);
	if (hour == 00)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",\
	12, 1);
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",\
	12, 1);
}
