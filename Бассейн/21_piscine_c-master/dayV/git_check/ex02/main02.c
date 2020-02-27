/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:47:48 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/06 21:54:19 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int i = 0;

int	ft_atoi(char *str);

void	test(char *str)
{
	if (atoi(str) == ft_atoi(str))
		printf("Test %d ok\n", ++i);
	else 
		printf("Test %d fail : s = %s, ft_atoi(s) = %d, atoi(s) = %d\n", ++i, str, ft_atoi(str), atoi(str));
}

int	main()
{
	test("123");
	test("21");
	test("\t\t\t\t\n\v231");
	test("     21");
	test("21a42");
	test("+256");
	test("-256");
	test("++456");
	test("--8");
	test("");
	test("0");
	test("-2146483648");
	test("-21");
	test("--467");
	test("--4901");
	test("33");
	test("99");
	test("1000000");
	test("0");
	test("709551615");
	test("--169");
	test("--23");
	test("-23");
	test("16923");
	test("+-12");
	test("+12");
	test("2147483647");
	test("0");
	test("--42");
	test("-75043");
	test("-750432");
	test("-95043");
	test("+0");
	test("+2");
}
