/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 22:45:34 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/12 21:23:24 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_put.h"

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
