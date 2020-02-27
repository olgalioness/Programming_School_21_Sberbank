/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:43:40 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 13:01:09 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int len;
	int i;
	int end;

	i = 1;
	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (argv[1][len - i] == ' ' || argv[1][len - i] == '\t')
			i++;
		end = len - i + 1;
		while (argv[1][len - i] != ' ' && argv[1][len - i] != '\t')
			i++;
		len = len - i + 1;
		while (len < end)
		{
			ft_putchar(argv[1][len]);
			len++;
		}
	}
	ft_putchar('\n');	
	return (0);
}
