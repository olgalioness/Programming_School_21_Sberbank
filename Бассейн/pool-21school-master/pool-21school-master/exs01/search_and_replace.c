/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 03:44:49 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/20 03:55:57 by qjosmyn          ###   ########.fr       */
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


int main(int argc, char **argv)
{
	int i;

	if (argc != 4 || argv[2][1] || argv[3][1])
	{
		ft_puts("\n");
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		i++;
	}
	ft_puts(argv[1]);
	ft_puts("\n");
	return (0);
}
