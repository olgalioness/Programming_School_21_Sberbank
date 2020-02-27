/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 16:16:33 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/04 20:46:41 by bbelen           ###   ########.fr       */
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
                if ((i == 1  && j == 1) || (i == x && j == y && j != 1) || (x == 1 && j != y && i == 1))
                    ft_putchar('A');
                else if ((i == x && j == 1) || (i == 1 && j == y))
                    ft_putchar('C');
                else if ((i > 1 && i < x) && (j > 1 && j < y))
                    ft_putchar(' ');
                else
                    ft_putchar('B');
                i++;
            }
            ft_putchar('\n');
            j++;
        }
    }
}
