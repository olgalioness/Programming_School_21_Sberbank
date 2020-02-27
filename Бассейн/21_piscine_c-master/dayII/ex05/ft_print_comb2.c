/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:17:24 by bshanae           #+#    #+#             */
/*   Updated: 2019/01/31 07:02:27 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int combination[2];

	combination[0] = -1;
	while (++combination[0] <= 99)
	{
		combination[1] = combination[0];
		while (++combination[1] <= 99)
		{
			if (combination[1] != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar('0' + combination[0] / 10);
			ft_putchar('0' + combination[0] % 10);
			ft_putchar(' ');
			ft_putchar('0' + combination[1] / 10);
			ft_putchar('0' + combination[1] % 10);
		}
	}
}

int	 main()
{
	ft_print_comb2();
	return (0);
}
