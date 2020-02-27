/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 18:51:27 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/12 10:33:35 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int count;
	int *ptr;
	int *temp;

	if (length <= 0)
		return (NULL);
	ptr = (int*)(malloc(sizeof(int) * length));
	if (!ptr)
		return (NULL);
	temp = ptr;
	count = 0;
	while (count < length)
	{
		*ptr = f(*tab);
		count++;
		tab++;
		ptr++;
	}
	return (temp);
}
