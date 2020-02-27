/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 20:33:12 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/20 21:02:58 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

voidft_print_comb2(void)
{
	int n;
	int m;

	n = 0;
	while (n < 99)
	{
		m = n + 1;
		while (m < 100)
		{
			ft_putchar(n / 10 + '0');
			ft_putchar(n % 10 + '0');
			ft_putchar(' ');
			ft_putchar(m / 10 + '0');
			ft_putchar(m % 10 + '0');
			ft_putchar(' ');
			m = m + 1;
		}
		n = n + 1;
	}
	ft_putchar('\n');
}
