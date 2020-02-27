/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 20:26:41 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/18 20:45:57 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int n;
	int a;
	int b;
	int c;

	n = 0;
	while (n <= 689)
	{
		a = n / 100;
		b = n % 100 / 10;
		c = n % 10;
		if (a < b && b < c)
		{
			ft_putchar('0' + a);
			ft_putchar('0' + b);
			ft_putchar('0' + c);
			ft_putchar(',');
			ft_putchar(' ');
		}
		n += 1;
	}
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');
}
