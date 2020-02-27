/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 17:22:31 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/08 18:13:53 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int first;
	int second;
	char *f;
	char *s;

	f = "A.M.";
	s = "P.M.";
	first = hour;
	second = 0;
	if (hour < 24 &&  hour >= 0)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 0)
		{
			first = 12;
			second = 0;
		}
		else if (hour < 11)
		{
			first = hour;
			second = hour++;
			s = "A.M.";
		}
		else if (hour == 12)
		{
			s = f;
			second = 0;
		}
		else if (hour > 12)
		{
			first = hour - 12;
			second  = first++;
			f = s;
		}
		printf("%d.00 %s AND %d.00 %s\n\n", first, f, second, s);
	}
}
