/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_app.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 10:16:07 by jpucelle          #+#    #+#             */
/*   Updated: 2018/03/07 16:32:12 by quentinma        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char d0;
	char d1;
	char d2;

	d0 = 47;
	while (d0++ <= 56)
	{
		d1 = d0;
		while (d1++ <= 56)
		{
			d2 = d1;
			while (d2++ <= 56)
			{
				ft_putchar(d0);
				ft_putchar(d1);
				ft_putchar(d2);
				if (d0 != 55)
				{
					ft_putchar(44);
					ft_putchar(32);
				}
			}
		}
	}
}