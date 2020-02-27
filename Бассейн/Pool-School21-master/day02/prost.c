/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prost.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 10:39:14 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/02 21:41:06 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ex04/ft_print_comb.c"
#include "ex05/ft_print_comb2.c"
#include "ex06/ft_putnbr.c"
#include "ex07/ft_print_combn.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
//	ft_putchar('4');
//	ft_putchar('\n');
//	ft_print_comb();
/*	ft_putchar('\n');

	ft_putchar('5');
	ft_putchar('\n');
//	ft_print_comb2();
	ft_putchar('\n');
*/
	int a;

	a = 34435;
	ft_putnbr(a);


	return (0);
}
