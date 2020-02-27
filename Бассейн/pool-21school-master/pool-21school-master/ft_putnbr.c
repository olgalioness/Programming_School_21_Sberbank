/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:00:34 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/07 23:40:35 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		nbr = (-1) * nb;
		ft_putchar('-');
	}
	else
		nbr = nb;
	if (nbr == 2147483648)
	{
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	else
	{
		if (nbr >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	return ;
}
