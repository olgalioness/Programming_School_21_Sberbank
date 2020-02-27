/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 00:33:54 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/09 14:43:39 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	lower_case(char c)
{
	return (c >= 'A' && c <= 'Z') ? (c + 32) : c;
}

int		compare_arg(char **arg, int i)
{
	char	*alert_case[3];
	int		flag;
	int		k;
	int		k1;

	k = -1;
	k1 = 0;
	alert_case[0] = "president";
	alert_case[1] = "attack";
	alert_case[2] = "bauer";
	while (++k < 3)
		if (alert_case[k][0] == lower_case(arg[0][i]))
		{
			flag = k;
			k = 10;
		}
	if (flag == -1)
		return (0);
	while (arg[0][i + k1] != '\0' && alert_case[k][k1] != '\0')
	{
		if (alert_case[k][k1] != lower_case(arg[0][i + k1]))
			return (0);
		k1++;
	}
	return (alert_case[k][k1] == '\0') ? 1 : 0;
}

int		analyze_arg(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((lower_case(str[i]) >= 'a' && lower_case(str[i]) <= 'z') &&
			(str[i + 1] == '\n' || str[i + 1] == '\t'))
			return (0);
		else if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
			return (compare_arg(&str, i));
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 0)
		while (i < argc)
		{
			if (analyze_arg(argv[i]) == 1)
				printf("ALERT\n");
			i++;
		}
}
