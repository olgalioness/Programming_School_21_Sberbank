/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 20:38:34 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/04 20:37:36 by bbelen           ###   ########.fr       */
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
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
				if ((i == 1 && j == 1) || (i == x && j == y && y != 1))
					ft_putchar('/');
				else if ((i == x && j == 1) || (i == 1 && j == y))
					ft_putchar(92);
				else if ((i > 1 && i < x) && (j > 1 && j < y))
					ft_putchar(' ');
				else
					ft_putchar('*');
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
