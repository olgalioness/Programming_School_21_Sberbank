/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:28:11 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/20 15:33:56 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		count_repeat(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	return (1);
}

int		main(int argc, char **argv)
{
	int		count;
	int		j;

	count = 0;
	j = 0;
	if (argc != 2 || argv[1][j] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][j] != '\0')
	{
		count = count_repeat(argv[1][j]);
		while (count != 0)
		{
			write(1, &argv[1][j], 1);
			count--;
		}
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
