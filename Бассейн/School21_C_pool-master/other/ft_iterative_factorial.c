/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 08:49:32 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/02 09:49:23 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int n;
	int a;

	n = 1;
	a = ft_iterative_factorial(n);
	printf("%d", a);
	return (0);
}

int		ft_iterative_factorial(int nb)
{
	int a;

	a = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 12)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			a = a * nb;
			nb--;
		}
	}
	return (a);
}
