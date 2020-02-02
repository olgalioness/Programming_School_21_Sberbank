/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:47:21 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/01 22:17:24 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int d1;
	int d2;

	d1 = -1;
	while (d1++ <= 97)
	{
		d2 = d1;
		while (d2++ <= 98)
		{
			ft_putchar((d1 / 10) + '0');
			ft_putchar((d1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((d2 / 10) + '0');
			ft_putchar((d2 % 10) + '0');
			if (d1 != 98 || d2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}