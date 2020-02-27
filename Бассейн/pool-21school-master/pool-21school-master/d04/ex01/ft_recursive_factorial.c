/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:10:12 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/03 17:51:33 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int cash;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		if (nb > 0)
		{
			cash = nb;
			nb = nb - 1;
			return (cash * ft_recursive_factorial(nb));
		}
		else
		{
			return (1);
		}
	}
}
