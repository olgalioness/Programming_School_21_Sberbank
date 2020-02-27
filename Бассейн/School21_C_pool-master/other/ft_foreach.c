/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:47:10 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/12 19:33:04 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int count;

	if (length <= 0)
		return;
	count = 0;
	while (count < length)
	{
		f(*tab);
		count++;
		tab++;
	}
}
