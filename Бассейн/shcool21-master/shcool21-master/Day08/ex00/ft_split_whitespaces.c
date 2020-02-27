/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 23:03:55 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/28 15:23:00 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		words(char *str)
{
	int	i;
	int	words;
	int	tmp;

	i = 0;
	words = 0;
	while (str[i])
	{
		tmp = 0;
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		while ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
		{
			i++;
			tmp = 1;
		}
		words = words + tmp;
	}
	return (words);
}

int		ft_strlen(char *str, int i)
{
	while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	char	**res;
	int		word;

	i = 1;
	res = malloc(sizeof(char) * (words(str) + 1));
	i = 0;
	k = 0;
	word = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		res[word] = malloc(sizeof(char) * (ft_strlen(str, i) + 1));
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			res[word][k++] = str[i++];
		}
		word++;
		res[word][k] = '\0';
		k = 0;
	}
	res[i] = NULL;
	return (res);
}
