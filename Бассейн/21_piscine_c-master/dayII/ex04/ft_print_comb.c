/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:25:25 by bshanae           #+#    #+#             */
/*   Updated: 2019/01/30 19:36:47 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0' - 1;
	while (++i <= '7')
	{
		j = i;
		while (++j <= '8')
		{
			z = j;
			while (++z <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(z);
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('\b');
	ft_putchar('\b');
}
