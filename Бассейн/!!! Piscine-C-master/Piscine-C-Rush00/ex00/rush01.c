/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 16:25:25 by fjessi            #+#    #+#             */
/*   Updated: 2019/08/04 20:52:39 by hbarrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	h = 0;
	if (x > 0 && y > 0)
	{
		while (h++ < y)
		{
			w = 0;
			while (w++ < x)
			{
				if ((w == 1 && h == 1)
						|| (w == x && h == y && w != 1 && h != 1))
					ft_putchar('/');
				else if ((w == 1 && h == y) || (w == x && h == 1))
					ft_putchar('\\');
				else if ((w == 1 || w == x) || (h == 1 || h == y))
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
}
