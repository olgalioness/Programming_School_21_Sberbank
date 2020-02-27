/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:53:34 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/21 18:48:05 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	i = 0;
	if (len ==0)
		return (0);
	max = *tab;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int		main(void)
{
	int arr[] = {-23, 1,2, 5 , -4, 100, 6};
	printf("%d", max(arr, 7));
	return (0);
}
