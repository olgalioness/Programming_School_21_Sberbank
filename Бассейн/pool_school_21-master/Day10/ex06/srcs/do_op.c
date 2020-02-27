/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:54:40 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/13 17:18:23 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_put.h"
#include "../includes/ft_opp.h"

int		ft_usage(int a, int b)
{
	ft_putnbr(0);
	ft_putchar('\n');
	return (a + b);
}

int		do_op(int val1, int val2, char argv)
{
	int (*op)(int, int);
	int i;

	i = 0;
	while (i < 5)
	{
		if (*g_opptab[i].op == argv)
			op = g_opptab[i].operation;
		i++;
	}
	return (op(val1, val2));
}

void	do_op_put(char **argv)
{
	int val1;
	int val2;

	val1 = ft_atoi(argv[0]);
	val2 = ft_atoi(argv[2]);
	if (argv[1][0] == '\0' || argv[1][1] != '\0')
	{
		ft_usage(val1, val2);
		return ;
	}
	if (val2 == 0 && (*argv[1] == '/' || *argv[1] == '%'))
	{
		if (*argv[1] == '/')
			ft_putstr("Stop : division by zeroi\n");
		if (*argv[1] == '%')
			ft_putstr("Stop : modulo by zero\n");
	}
	else if (*argv[1] != '+' && *argv[1] != '-' && *argv[1] != '*'
			&& *argv[1] != '/' && *argv[1] != '%')
		ft_usage(val1, val2);
	else
	{
		ft_putnbr(do_op(val1, val2, *argv[1]));
		ft_putchar('\n');
	}
}
