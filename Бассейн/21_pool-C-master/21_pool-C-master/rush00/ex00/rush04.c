/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 03:07:47 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/09 20:37:32 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_str(int x, int y, int i, int j)
{
	if ((i == 0) && (j == 0))
		ft_putchar('A');
	else if ((i == 0) && (j == x - 1))
		ft_putchar('C');
	else if ((i == y - 1) && (j == 0))
		ft_putchar('C');
	else if ((i == y - 1) && (j == x - 1))
		ft_putchar('A');
	else if (i > 0 && i < y - 1 && j > 0 && j < x - 1)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

int		rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print_str(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
