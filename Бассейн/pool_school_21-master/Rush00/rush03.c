/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 21:44:35 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/06 17:27:58 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(int n, char a, char b, char c)
{
	int i;

	i = 0;
	ft_putchar(a);
	while (i < n - 2)
	{
		ft_putchar(b);
		i++;
	}
	if (n != 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int i;

	if (a <= 0 || b <= 0)
		return ;
	else
	{
		i = 0;
		ft_putline(a, 'A', 'B', 'C');
		while (i < b - 2)
		{
			ft_putline(a, 'B', ' ', 'B');
			i++;
		}
		if (b != 1)
			ft_putline(a, 'A', 'B', 'C');
	}
}
