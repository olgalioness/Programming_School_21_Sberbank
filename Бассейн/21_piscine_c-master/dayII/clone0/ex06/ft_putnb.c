/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:41:30 by bshanae           #+#    #+#             */
/*   Updated: 2019/01/31 08:55:56 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnb(int nb)
{
	int divider;
	int flag;

	divider = 1000000000;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (divider >= 1)
	{
		if ((nb / divider > 0 && nb / divider < 10) || flag == 1)
		{
			ft_putchar('0' + nb / divider);
			nb = nb % divider;
			flag = 1;
		}
		divider /= 10;
	}
}
