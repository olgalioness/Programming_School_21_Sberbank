/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:29:08 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 22:50:26 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	print_error(void)
{
	ft_putstr("This isn't rush\n");
}

void	pre_print_solutions(int *matches, int count_match, int w, int h)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (matches[i])
			print_solution(i, w, h, count_match);
		if (matches[i] && count_match > 1)
		{
			ft_putstr(" || ");
			count_match--;
		}
		i++;
	}
	ft_putstr("\n");
}

void	print_solution(int i, int w, int h, int c)
{
	if (c > 0)
		ft_putstr("[colle-0");
	else
		ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(w);
	ft_putstr("] [");
	ft_putnbr(h);
	ft_putstr("]");
}
