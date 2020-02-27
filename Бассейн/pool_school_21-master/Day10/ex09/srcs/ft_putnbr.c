/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:36:15 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/12 17:18:53 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_put.h"

void	ft_putnbr(int nb)
{
	int i;
	int array[10];

	i = 0;
	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('0' + 8);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	while (nb != 0)
	{
		array[i++] = nb % 10;
		nb = nb / 10;
	}
	if (i == 0)
		ft_putchar('0');
	while (i > 0)
		ft_putchar(array[--i] + '0');
}
