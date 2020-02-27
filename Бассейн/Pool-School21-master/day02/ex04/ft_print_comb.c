/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 21:11:38 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/01 20:33:01 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (c <= '9')
	{
		while (b <= '8')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
			if (a == '7' && b == '8' && c == '9')
				break ;
			ft_putchar(',');
			ft_putchar(' ');
			b++;
			c++;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}
