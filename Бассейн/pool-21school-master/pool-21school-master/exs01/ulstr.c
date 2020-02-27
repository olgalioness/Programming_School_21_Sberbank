/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 03:56:12 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/20 04:12:36 by qjosmyn          ###   ########.fr       */
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
	char c;

	i = 0;
	if (argc != 2)
	{
		ft_puts("\n");
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')	
			argv[1][i] = argv[1][i] + 32;
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			argv[1][i] = argv[1][i] - 32;
		i++;
	}
	ft_puts(argv[1]);
	ft_puts("\n");
	return (0);
}
