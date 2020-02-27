/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:41:30 by bshanae           #+#    #+#             */
/*   Updated: 2019/01/31 10:27:57 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	main(void)
{
	ft_putnb(10);
	ft_putchar('\n');
	ft_putnb(-1);
	ft_putchar('\n');
	ft_putnb(1);
	ft_putchar('\n');
	ft_putnb(10203);
	return (0);
}
