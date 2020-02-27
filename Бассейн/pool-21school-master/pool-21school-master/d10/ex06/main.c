/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:33:29 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/13 22:04:05 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int		main(int argc, char **argv)
{
	t_ptr	ft_oper[N];
	int		i;
	int		check;

	i = 0;
	if (ft_check(argc, argv))
		return (0);
	check = ft_oper_check(argv[2]);
	if (check == 4 && !ft_atoi(argv[3]))
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (check == 5 && !ft_atoi(argv[3]))
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_choise_oper(ft_oper);
	ft_putnbr(ft_oper[check - 1](ft_atoi(argv[1]), ft_atoi(argv[3])));
	ft_putchar('\n');
	return (0);
}
