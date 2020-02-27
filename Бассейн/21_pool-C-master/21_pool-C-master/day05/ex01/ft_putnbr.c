/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:53:16 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/10 16:14:46 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long num;
	int c[12];
	int i;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
	}
	i = 0;
	while (num > 0)
	{
		c[i] = num % 10 + 48;
		num = num / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}
