/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:39:20 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/21 16:55:55 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void find_inter(char *str1, char *str2)
{
	int		i;
	int		ans_ascii[256];

	i = 0;
	while (str2[i] != '\0')
	{
		ans_ascii[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		if (ans_ascii[(int)str1[i]] == 1)
		{
			write(1, &str1[i], 1);
			ans_ascii[(int)str1[i]] = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		find_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
