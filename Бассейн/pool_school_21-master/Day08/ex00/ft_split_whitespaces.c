/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 20:19:06 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/12 20:23:19 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_words(char *str)
{
	int len;
	int i;
	int fl;

	fl = 0;
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && fl)
		{
			len++;
			fl = 0;
		}
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			fl = 1;
		i++;
	}
	if (fl)
		len++;
	return (len);
}

int		ft_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && src[j] != ' ' && src[j] != '\n' && src[j] != '\t')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	dop(int *len_word, int *j, char *str)
{
	while (!*len_word)
	{
		*len_word = ft_word(&str[*j]);
		if (!*len_word)
			(*j)++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		len;
	int		len_word;
	int		i;
	int		j;

	len = ft_words(str);
	result = (char **)malloc(sizeof(char *) * (len + 1));
	i = 0;
	j = 0;
	while (i < len)
	{
		len_word = 0;
		dop(&len_word, &j, str);
		result[i] = (char *)malloc(sizeof(char) * (len_word + 1));
		result[i] = ft_strcat(result[i], &str[j]);
		j += len_word;
		i++;
	}
	result[len] = NULL;
	return (result);
}
