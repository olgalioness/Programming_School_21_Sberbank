/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 09:47:52 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/21 17:16:49 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	nb1;

	if (nb < 0)
	{
		ft_putchar('-');
		nb1 =  -nb;
	}
	else 
		nb1 = nb;
	if (nb1 > 10)
		ft_putnbr(nb1 / 10);
	ft_putchar(nb1 % 10 + '0');
}
