/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1sil_ft_print_comb.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:02:56 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/06 17:02:56 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char d1;
	char d2;
	char d3;

	d1 = 47;
	while (d1++ <= 56)
	{
		d2 = d1;
		while (d2++ <= 56)
		{
			d3 = d2;
			while (d3++ <= 56)
			{
				ft_putchar(d1);
				ft_putchar(d2);
				ft_putchar(d3);
				if (d1 != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}