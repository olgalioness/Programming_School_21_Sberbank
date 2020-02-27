/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 19:43:32 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/08 23:23:14 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ans;
	int i;

	if (min >= max || min == -2147483648)
		return (0);
	i = min;
	ans = (int*)malloc(sizeof(int) * (max - min));
	if (ans == NULL)
		return (0);
	while (i < max)
	{
		*ans = i;
		i++;
		ans++;
	}
	return (ans - (max - min));
}
