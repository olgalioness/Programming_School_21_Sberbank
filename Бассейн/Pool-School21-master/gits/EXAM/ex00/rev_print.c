/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:13:03 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/20 15:34:38 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		count_ch(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i - 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = argc - 1;
	j = 0;
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i > 0)
	{
		j = count_ch(argv[i]);
		while (j > -1)
		{
			write(1, &argv[i][j], 1);
			j = j - 1;
		}
		i = i - 1;
		write(1, " ", 1);
	}
	write(1, "\n", 1);
	return (0);
}
