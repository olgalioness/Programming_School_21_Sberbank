/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 14:52:30 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/03 15:21:37 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int cash;

	cash = 1;
	if (power > 0)
	{
		while (power)
		{
			cash = cash * nb;
			power--;
		}
		return (cash);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
