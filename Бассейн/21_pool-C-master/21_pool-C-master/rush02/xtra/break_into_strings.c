/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   break_into_strings.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomega <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 15:20:55 by aomega            #+#    #+#             */
/*   Updated: 2019/06/23 17:17:14 by aomega           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strlen_sym(char *str, char end)
{
	int i;

	i = 0;
	while (str[i] != end)
		i++;
	return (i + 1);
}

char	*copy_str(char **str)
{
	int		i;
	char	*out;

	i = 0;
	out = (char*)malloc(sizeof(char) * strlen_sym(*str, '\n'));
	while (*(*str + i) != '\n')
	{
		out[i] = *(*str + i);
		i++;
	}
	out[i] = '\0';
	*str = *str + i + 1;
	return (out);
}

char	str_height(char *str)
{
	int i;
	int height;

	i = 0;
	height = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			height++;
		i++;
	}
	return (height);
}

char	**break_into_strings(char *str)
{
	int		i;
	int		height;
	char	**output;

	i = 0;
	height = str_height(str);
	output = (char**)malloc(sizeof(char) * height);
	while (i < height)
	{
		output[i] = copy_str(&str);
		i++;
	}
	return (output);
}
