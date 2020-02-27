/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:14:12 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/20 15:32:45 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[i][j] == ' ' || argv[i][j] == '\t')
		j++;
	while (argv[i][j] != ' ' && argv[i][j] != '\t' && argv[i][j] != '\0')
	{
		write(1, &argv[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
