/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:01:27 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/20 20:43:18 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	int		i;
	char	arr_ascii[256];

	i = 0;
	while (str1[i] != '\0')
	{
		if (arr_ascii[(int)str1[i]] == 0)
			write(1, &str1[i], 1);
		arr_ascii[(int)str1[i]] = 1;
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		if (arr_ascii[(int)str2[i]] == 0)
			write(1, &str2[i], 1);
		arr_ascii[(int)str2[i]] = 1;
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
