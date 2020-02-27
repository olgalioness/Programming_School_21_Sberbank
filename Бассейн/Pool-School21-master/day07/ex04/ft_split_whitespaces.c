/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 20:21:25 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/20 11:11:54 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		count_words(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i] != ' ' && str[i] != '\t'
				&& str[i] != '\n' && str[i] != '\0')
			count++;
		while (str[i] != ' ' && str[i] != '\t'
				&& str[i] != '\n' && str[i] != '\0')
			i++;
	}
	return (count);
}

int		*characters_in_word(char *str, int count_words)
{
	int		i;
	int		*counts;
	int		j;
	int		count;

	j = 0;
	i = 0;
	count = 0;
	counts = (int*)malloc(sizeof(int) * count_words);
	while (str[i] != '\0' && j < count_words)
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		while (str[i] != ' ' && str[i] != '\t'
				&& str[i] != '\n' && str[i] != '\0')
		{
			count++;
			i++;
		}
		counts[j] = count;
		j++;
		count = 0;
	}
	return (counts);
}

char	**fill_ans(char *str, char **ans)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != ' ' && str[i] != '\t'
				&& str[i] != '\n' && str[i] != '\0')
		{
			ans[k][j] = str[i];
			j++;
			i++;
		}
		ans[k][j] = '\0';
		k++;
		j = 0;
	}
	return (ans);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ans;
	int		*characters_word;
	int		count_str;
	int		i;

	i = 0;
	count_str = count_words(str);
	ans = (char**)malloc(sizeof(char*) * (count_str + 1));
	if (count_str != 0)
	{
		characters_word = characters_in_word(str, count_str);
		if (ans == NULL)
			return (0);
		while (i < count_str)
		{
			ans[i] = (char*)malloc(sizeof(char) * (characters_word[i] + 1));
			if (ans[i] == NULL)
				return (0);
			i++;
		}
		ans = fill_ans(str, ans);
	}
	ans[count_str] = NULL;
	return (ans);
}
