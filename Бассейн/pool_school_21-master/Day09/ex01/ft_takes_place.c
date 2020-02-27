/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 17:22:46 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/08 18:04:39 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*a;
	char	*b;
	int		h;

	if (hour >= 24 || hour < 0)
		return ;
	h = (hour + 1) % 24;
	a = "A.M.";
	b = "A.M.";
	if (hour > 12)
	{
		a = "P.M.";
		hour -= 12;
	}
	if (h >= 12)
	{
		b = "P.M.";
		h -= 12;
	}
	if (hour == 0)
		hour = 12;
	if (h == 0)
		h = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s ", hour, a);
	printf("AND %d.00 %s\n\n", h, b);
}
