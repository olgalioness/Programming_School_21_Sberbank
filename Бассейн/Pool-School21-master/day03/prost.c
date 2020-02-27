/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prost.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 10:39:14 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/03 11:48:12 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	ft_putchar('e');
	ft_putchar('x');
	ft_putchar('0');
	ft_putchar('0');

	int ip;

	ft_ft(&ip);
	ft_putchar('\n');
	ft_putchar(ip / 10 + '0');
	ft_putchar(ip % 10 + '0');
	ft_putchar('\n');
	ft_putchar('e');
	ft_putchar('x');
	ft_putchar('0');
	ft_putchar('1');

	int a;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****r = &e;
	int ******t = &r;
	int *******y = &t;
	int ********u = &y;
	int *********z = &u;

	ft_ultimate_ft(z);
	ft_putchar('\n');
	ft_putchar(ip / 10 + '0');
	ft_putchar(ip % 10 + '0');
	ft_putchar('\n');
	ft_putchar('e');
	ft_putchar('x');
	ft_putchar('0');
	ft_putchar('2');
	ft_putchar('\n');

	int a1 = 5;
	//int *aa1 = &a;
	int b1 = 3;
	//int *bb1 = &b;
	
	ft_swap(&a1, &b1);
	ft_putchar(a1 + '0');
	ft_putchar(b1 + '0');
	ft_putchar('\n');
	ft_putchar('e');
	ft_putchar('x');
	ft_putchar('0');
	ft_putchar('3');
	ft_putchar('\n');

	// now a1 =3, b1 =5
	int div, mod;
	ft_div_mod(a1, b1, &div, &mod);
	ft_putchar(div + '0');
	ft_putchar(mod + '0');
	ft_putchar('\n');
	ft_putchar('e');
	ft_putchar('x');
	ft_putchar('0');
	ft_putchar('4');
	ft_putchar('\n');
	ft_ultimate_div_mod(&a1, &b1);
	ft_putchar(a1 + '0');
	ft_putchar(b1 + '0');
	ft_putchar('\n');
	ft_putchar('\n');


	char *lol  = "a234";
	//char *yy = NULL;

	//ft_strlen(yy);
	ft_putstr(lol);
	ft_strlen(lol);
	return (0);
}
