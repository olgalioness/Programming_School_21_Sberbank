/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 12:41:53 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/03 17:50:21 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}
	}
	return (fact);
}
