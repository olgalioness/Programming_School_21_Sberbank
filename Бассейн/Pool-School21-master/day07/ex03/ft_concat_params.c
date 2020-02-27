/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 14:37:38 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/08 23:22:36 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_argv(int argc, char **argv)
{
	int		count;
	int		i;
	char	*name;

	count = 0;
	i = 1;
	while (argv[i] != 0 && i < argc)
	{
		name = argv[i];
		while (*name != '\0')
		{
			count++;
			name++;
		}
		count++;
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		j;
	char	*ans;
	int		i;
	int		size;

	i = 1;
	size = count_argv(argc, argv);
	ans = (char*)malloc(sizeof(char) * (size + 1));
	if (ans == NULL)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			*ans = argv[i][j];
			j++;
			ans++;
		}
		*ans = '\n';
		ans++;
		i++;
	}
	ans[i] = '\0';
	return (ans - size);
}
