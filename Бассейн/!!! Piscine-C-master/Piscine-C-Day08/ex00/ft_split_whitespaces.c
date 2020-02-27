/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:07:34 by rfork             #+#    #+#             */
/*   Updated: 2019/08/09 15:53:52 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_count_word(char *str)
{
	int		i;
	int		len;

	i = 1;
	len = 0;
	while (str[i] != '\0')
	{
		if (i == 1)
		{
			if ((str[i - 1] != '\n') && (str[i - 1] != '\t')\
	&& (str[i - 1] != ' ') && (str[i - 1] != '\v'))
				len++;
		}
		else if (((str[i - 1] == '\n') || (str[i - 1] == '\t')\
	|| (str[i - 1] == ' ') || (str[i - 1] == '\v')) && ((str[i] != '\n')\
	&& (str[i] != '\t') && (str[i] != ' ') && (str[i] != '\v')))
			len++;
	}
	return (len);
}

int			ft_len_word(char *str, int i)
{
	int		len;

	len = 0;
	while ((str[i] != '\n') && (str[i] != '\t') && (str[i] != ' ')\
	&& str[i] != '\v')
	{
		len++;
		i++;
	}
	return (len);
}

void		ft_get_word(char *str, char *arr2, int i)
{
	int		j;

	j = 0;
	while (str[i] == '\n' && str[i] == '\t' && str[i] == ' ' && str[i] != '\v')
		arr2[j++] = str[i++];
	arr2[i] = '\0';
}

char		**ft_split_whitespaces(char *str)
{
	char	**arr1;
	char	*arr2;
	int		i;
	int		j;

	j = 0;
	i = 0;
	arr1 = (char**)malloc(sizeof(char*) * (ft_count_word(str) + 1));
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && str[i] == '\t' && str[i] == ' ' && str[i] != '\v')
		{
			arr2 = ((char*)malloc(sizeof(char) * (ft_len_word(str, i) + 1)));
			ft_get_word(str, arr2, i);
			arr1[j++] = arr2;
			i += ft_len_word(str, i);
		}
		else
			i++;
	}
	arr1[j] = 0;
	return (arr1);
}
