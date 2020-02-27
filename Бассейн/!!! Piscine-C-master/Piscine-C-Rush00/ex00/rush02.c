/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:21:52 by rfork             #+#    #+#             */
/*   Updated: 2019/08/04 15:27:27 by rfork            ###   ########.fr       */
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
				if (h == 1 && (w == 1 || w == x))
					ft_putchar('A');
				else if (h == y && (w == 1 || w == x))
					ft_putchar('C');
				else if ((w == 1 || w == x) || (h == 1 || h == y))
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
}
