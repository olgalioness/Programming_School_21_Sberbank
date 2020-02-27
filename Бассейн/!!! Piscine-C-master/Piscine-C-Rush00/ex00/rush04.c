/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 14:45:37 by rfork             #+#    #+#             */
/*   Updated: 2019/08/04 20:53:23 by hbarrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	w;

	h = 0;
	if (x > 0 && y > 0)
	{
		while (h++ < y)
		{
			w = 0;
			while (w++ < x)
			{
				if ((w == 1 && h == 1) ||
					(w == x && h == y && w != 1 && h != 1))
					ft_putchar('A');
				else if ((w == x && h == 1) || (w == 1 && h == y))
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
