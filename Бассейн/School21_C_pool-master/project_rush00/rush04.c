/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 14:23:28 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/03 18:15:14 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rushtop(int a)
{
	ft_putchar('A');
	while (a > 2)
	{
		ft_putchar('B');
		a--;
	}
	if (a == 2)
		ft_putchar('C');
	a--;
	ft_putchar('\n');
}

void	rushmid(int a)
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
		ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	if (a < 0 || b < 0)
		return ;
	rushtop(a);
	while (b > 2)
	{
		rushmid(a);
		b--;
	}
	if (b == 2)
		rushbot(a);
}
