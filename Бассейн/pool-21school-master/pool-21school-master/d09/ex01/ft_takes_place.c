/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 17:27:18 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/08 18:19:03 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	prt(int hour, int i);

void	ft_takes_place(int hour)
{
	int i;

	i = 0;
	if (hour < 0 || hour > 23)
		return ;
	if (hour >= 12)
	{
		hour = hour - 12;
		i = 1;
	}
	prt(hour, i);
}

void	prt(int hour, int i)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if ((hour == 0) & !i)
		printf("%d.00 P.M. AND %d.00 A.M.", hour + 12, hour + 1);
	else if ((hour == 0) & i)
		printf("%d.00 A.M. AND %d.00 P.M.", hour + 12, hour + 1);
	else if ((hour < 11) && !i)
		printf("%d.00 A.M. AND %d.00 A.M.", hour, hour + 1);
	else if ((hour == 11) & (!i))
		printf("%d.00 A.M. AND %d.00 P.M.", hour, hour + 1);
	else if ((hour < 11) && i)
		printf("%d.00 P.M. AND %d.00 A.M.", hour, hour + 1);
	else if ((hour == 11) & i)
		printf("%d.00 P.M. AND %d.00 A.M.", hour, hour + 1);
	printf("\n");
	printf("\n");
}
