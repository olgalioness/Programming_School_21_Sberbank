/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 23:47:25 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/02 23:47:27 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(int x, char c_s, char c_m, char c_e)
{
	int i;

	i = 0;
	while (++i <= x)
		if (i == 1)
			ft_putchar(c_s);
		else if (i == x)
			ft_putchar(c_e);
		else
			ft_putchar(c_m);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	j = 0;
	while (++j <= y)
		if (j == 1)
			ft_putline(x, '/', '*', '\\');
		else if (j == y)
			ft_putline(x, '\\', '*', '/');
		else
			ft_putline(x, '*', ' ', '*');
}
