/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 04:13:25 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/20 04:30:22 by qjosmyn          ###   ########.fr       */
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

	i = 0;
	if (argc != 2)
	{
		ft_puts("\n");
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			if ((argv[1][i] + 13) > 'Z')
				argv[1][i] = 'A' + ((argv[1][i] + 13) - 'Z') - 1;
			else
				argv[1][i] = argv[1][i] + 13;
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			if ((argv[1][i] + 13) > 'z')
				argv[1][i] = 'a' + ((argv[1][i] + 13) - 'z') - 1;
			else
				argv[1][i] = argv[1][i] + 13;
		}
		i++;
	}
	ft_puts(argv[1]);
	ft_puts("\n");
	return (0);
}
