/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 19:23:17 by exam              #+#    #+#             */
/*   Updated: 2019/08/18 20:32:20 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hidenp(char *a, char *b)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (b[j] != '\0')
	{
		if (a[i] == b[j])
			i++;
		if (a[i] == '\0')
		{
			ft_putchar('1');
			ft_putchar('\n');
			return ;
		}
		j++;
	}
	ft_putchar('0');
	ft_putchar('\n');
	return ;
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		ft_hidenp(argv[1], argv[2]);	
	return (0);
}
