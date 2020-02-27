/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:44:03 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 15:49:13 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		result = result * nb;
		if (result == 0)
		{
			return (0);
		}
		nb--;
	}
	return (result);
}
