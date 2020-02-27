/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:41:09 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/05 11:02:38 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			if (a != b)
			{
				ft_putchar((a / 10) + 48);
				ft_putchar((a % 10) + 48);
				ft_putchar(' ');
				ft_putchar(b / 10 + 48);
				ft_putchar(b % 10 + 48);
			}
			if (a == 98 && b == 99)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
	}
}
