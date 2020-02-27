/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:22:28 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/20 15:36:13 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char what, char a)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == what)
			write(1, &a, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	return ;
}

int		main(int argc, char **argv)
{
	if (argc != 4 || argv[2][1] != '\0'
			|| argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	search_and_replace(&argv[1][0], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
