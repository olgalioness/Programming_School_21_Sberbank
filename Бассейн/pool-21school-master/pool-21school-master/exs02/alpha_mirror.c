/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 20:06:17 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 20:47:22 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void	alpha_mirror(char c)
{
	if (c >= 'A' && c <= 'Z')
		ft_putchar('Z' - c + 'A');
	else if (c >= 'a' && c <= 'z')
		ft_putchar('z' - c + 'a');
	else
		ft_putchar(c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			alpha_mirror(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
