/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:45:51 by atama             #+#    #+#             */
/*   Updated: 2019/06/23 23:15:29 by atama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	int flag;

	flag = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = 214748364;
			flag = 1;
		}
		else
			nb = 0 - nb;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
	if (flag == 1)
		ft_putchar('8');
}
