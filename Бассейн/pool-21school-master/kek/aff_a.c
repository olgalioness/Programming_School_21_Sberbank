/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 01:49:53 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/20 02:33:13 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puts(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_puts("\n");
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
		{
			ft_puts("a");
			ft_puts("\n");
			return (0);
		}
		i++;
	}
	ft_puts("\n");
	return (0);
}
