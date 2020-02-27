/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:26:00 by fjessi            #+#    #+#             */
/*   Updated: 2019/08/04 18:52:56 by fjessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int h;
	int w;

	h = 0;
	if (x > 0 && y > 0)
	{
		while (h++ < y)
		{
			w = 0;
			while (w++ < x)
			{
				if ((w == 1 || w == x) && (h == 1 || h == y))
					ft_putchar('o');
				else if (w == 1 || w == x)
					ft_putchar('|');
				else if (h == 1 || h == y)
					ft_putchar('-');
				else
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
}
