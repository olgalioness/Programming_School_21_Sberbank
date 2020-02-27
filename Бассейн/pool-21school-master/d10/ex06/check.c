/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:20:33 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/13 21:55:08 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
		return (1);
	if (ft_strlen(argv[2]) != 1 || (!ft_oper_check(argv[2])))
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int		ft_oper_check(char *str)
{
	if (str[0] == '+')
		return (1);
	else if (str[0] == '-')
		return (2);
	else if (str[0] == '*')
		return (3);
	else if (str[0] == '/')
		return (4);
	else if (str[0] == '%')
		return (5);
	else
		return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_choise_oper(t_ptr f[N])
{
	f[0] = &ft_plus;
	f[1] = &ft_minus;
	f[2] = &ft_mult;
	f[3] = &ft_div;
	f[4] = &ft_mod;
}
