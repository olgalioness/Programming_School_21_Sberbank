/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbelen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:50:56 by bbelen            #+#    #+#             */
/*   Updated: 2019/08/04 20:51:05 by bbelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	if (x != 0 && y != 0)
	{
		j = 1;
		while (++j <= y)
		{
			i = 1;
			while (++i <= x)
			{
				if ((i == 1 && j == 1) || (i == x && j == 1))
					ft_putchar('o');
				else if ((i == 1 && j == y) || (i == x && j == y))
					ft_putchar('o');
				else if ((i > 1 && i < x) && (j > 1 && j < y))
					ft_putchar(' ');
				else if (i == 1 || i == x)
					ft_putchar('|');
				else
					ft_putchar('-');
			}
			ft_putchar('\n');
		}
	}
}
