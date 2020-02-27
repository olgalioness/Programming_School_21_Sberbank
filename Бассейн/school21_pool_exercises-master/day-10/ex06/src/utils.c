/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 17:07:48 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/17 17:07:49 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_put_positive(int nb)
{
	int a;
	int b;

	if (!nb)
		return ;
	a = nb / 10;
	b = nb - a * 10;
	ft_put_positive(a);
	ft_putchar('0' + b);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-2);
		ft_putnbr(147483648);
		return ;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_put_positive(-nb);
		return ;
	}
	ft_put_positive(nb);
}

int		is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}
