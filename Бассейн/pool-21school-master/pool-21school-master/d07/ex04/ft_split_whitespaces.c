/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 20:14:35 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/09 09:36:39 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len_word(char *str);
int		ft_strlen(char *str);

char	**ft_split_whitespaces(char *str)
{
	int		n;
	char	**s;
	char	**result;

	s = (char**)malloc(sizeof(char *) * (ft_len_word(str) + 1));
	result = s;
	while (*str != '\0')
	{
		n = ft_strlen(str);
		*s = (char*)malloc(sizeof(char) * (n + 1));
		while (*str != '\n' && *str != ' ' && *str != '\t' && *str != '\0')
		{
			**s = *str;
			(*s)++;
			str++;
		}
		**s = '\0';
		*s = (*s) - n;
		s++;
		str++;
	}
	*s = (char*)malloc(sizeof(char) * 1);
	**s = '\0';
	return (result);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str != '\n' && *str != ' ' && *str != '\t' && *str != '\0')
	{
		n++;
		str++;
	}
	str = str - n;
	return (n);
}

int		ft_len_word(char *str)
{
	int n;
	int i;

	n = 0;
	i = 1;
	while (str[n])
	{
		if (str[n] == '\n' || str[n] == 32 || str[n] == '\t')
			i++;
		n++;
	}
	return (i);
}
