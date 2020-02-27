/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:22:02 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/10 19:17:29 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	display_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	while (i <= 8)
	{
		j = 0;
		while (j <= 8)
		{
			put_char(grid[i][j] + '0');
			put_char(' ');
			j++;
		}
		put_char('\n');
		i++;
	}
}
