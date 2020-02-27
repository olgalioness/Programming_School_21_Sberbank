/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:16:54 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 17:21:11 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_second(char symbol, char *str1)
{
	int i;

	i = 0;
	while (str1[i])
	{
		if (symbol == str1[i])
			return (0);
		i++;
	}
	return (1);
}

int		doubles(char *str2, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (str2[i] == str2[len])
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (doubles(argv[1], i))
				ft_putchar(argv[1][i]);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (doubles(argv[2], i) && ft_second(argv[2][i], argv[1]))
				ft_putchar(argv[2][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
