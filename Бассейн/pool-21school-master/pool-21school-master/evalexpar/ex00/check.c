/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:20:33 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/18 23:00:12 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_oper_check(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (2);
	else if (c == '*')
		return (3);
	else if (c == '/')
		return (4);
	else if (c == '%')
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

int		ft_func_val(char c,char *str1, char *str2)
{
	t_ptr	ft_oper[N];
	int		check;
	int		result;

	check = ft_oper_check(c);
	ft_choise_oper(ft_oper);
	result = ft_oper[check - 1](ft_atoi(str1), ft_atoi(str2));
	return (result);
}

