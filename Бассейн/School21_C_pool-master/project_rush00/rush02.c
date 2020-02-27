/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 14:48:03 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/03 18:14:41 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rushtop(int a)
{
	ft_putchar('A');
	while (a > 2)
	{
		ft_putchar('B');
		a--;
	}
	if (a == 2)
		ft_putchar('A');
	ft_putchar('\n');
}

void	rushmiddle(int a)
{
	ft_putchar('B');
	while (a > 2)
	{
		ft_putchar(' ');
		a--;
	}
	if (a == 2)
		ft_putchar('B');
	ft_putchar('\n');
}

void	rushbot(int a)
{
	ft_putchar('C');
	while (a > 2)
	{
		ft_putchar('B');
		a--;
	}
	if (a == 2)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	if (a <= 0 || b <= 0)
		return ;
	rushtop(a);
	while (b > 2)
	{
		rushmiddle(a);
		b--;
	}
	if (b == 2)
		rushbot(a);
}
