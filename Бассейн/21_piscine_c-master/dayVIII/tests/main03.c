/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 13:46:07 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/07 13:55:54 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_abs.h"

#define TEST(a,b) (a == b) ? printf("Test ok\n") : printf("Tesk fail : %d", b) 

int		main()
{
	int a = 0;
	int b = 100;
	int c = -44;

	printf("%d\n", ABS(a));
	printf("%d\n", ABS(b));
	printf("%d\n", ABS(c));

	TEST(ABS(15), 15);
	TEST(ABS(0), 0);
	TEST(ABS(-25), 25);
	TEST(ABS(1234567), 1234567);
	TEST(ABS(-1234567), 1234567);
	TEST(ABS(2147483647), 2147483647);
	TEST(ABS((int)-2147483648), 0);
}
