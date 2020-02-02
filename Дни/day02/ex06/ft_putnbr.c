/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 15:03:15 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/02 21:50:47 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        if (nb == -2147483648)
            {
                ft_putchar('2');
                ft_putnbr(147483648);
                return;
            }
        ft_putnbr(-nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
	else
	{
		ft_putchar(nb + '0');
	}
}