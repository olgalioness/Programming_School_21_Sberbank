/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 18:03:46 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/13 21:35:33 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int mem;
	int j;
	int i;

	i = 0;
	mem = 0;
	j = 0;
	while (1)
	{
		if (*(str + i) != ' ' && *(str + i) != '\t' && *(str + i) != '\n'
				&& *(str + i) != '\0')
			mem++;
		else
		{
			if (mem > 0)
				j++;
			mem = 0;
		}
		if (*(str + i) == '\0')
			return (j);
		i++;
	}
	return (j);
}

char	*get_word(char t[9999], int len)
{
	char	*s;
	int		i;

	i = 0;
	s = (char*)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		*(s + i) = t[i];
		i++;
	}
	*(s + i) = '\0';
	return (s);
}

char	**get_array(char **res, char *str, int *j)
{
	char	t[9999];
	int		mem;

	mem = 0;
	while (1)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
			t[mem++] = *str;
		else
		{
			if (mem > 0)
			{
				*(res + *j) = (char*)malloc(sizeof(char) * (mem + 1));
				*(res + *j) = get_word(t, mem);
				*j = *j + 1;
			}
			mem = 0;
		}
		if (*str == '\0')
			break ;
		str++;
	}
	return (res);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		j;

	j = 0;
	if (!count_words(str))
	{
		res = (char**)malloc(sizeof(char));
		*res = 0;
		return (res);
	}
	res = (char**)malloc((count_words(str) + 1) * sizeof(char));
	res = get_array(res, str, &j);
	*(res + j) = 0;
	return (res);
}
