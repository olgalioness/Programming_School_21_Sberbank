/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 03:03:03 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/20 05:06:44 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puts(char str)
{
	write(1, &(str), 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	argc = 1;
	j = 0;
	while (argv[1][j])
	{
		i = 0;
		if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
		{
			while (i < (argv[1][j] - 'A' + 1))
			{
				ft_puts(*argv[1]);
				i++;
			}
		}
		else if (argv[1][j] >= 'a' && argv[1][j] <= 'z')
			while (i < (argv[1][j] - 'a' + 1))
			{
				ft_puts(argv[1][j]);
				i++;
			}
		j++;
	}
	ft_puts('\n');
	return (0);
}
