/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:16:54 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 11:40:04 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_doubles(char *str1, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (str1[i] == str1[len])
			return (0);
		i++;
	}
	return (1);
}

int		ft_second(char symbol, char *str2)
{
	while (*str2)
	{
		if (symbol == *str2)
			return (1);
		str2++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_doubles(argv[1], i) != 0
					&& ft_second(argv[1][i], argv[2]))
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
