/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:49:11 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/17 12:04:51 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar(0 + 48);
	else
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar(2 + 48);
			nb = 147483648;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb / 10 == 0)
			ft_putchar(nb + 48);
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + 48);
		}
	}
}
