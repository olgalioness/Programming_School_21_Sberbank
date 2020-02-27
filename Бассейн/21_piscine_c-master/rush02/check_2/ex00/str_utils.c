/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:28:19 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 22:49:00 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int		length_str(char *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*allocate_str(int size)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * size);
	if (!new_str)
		exit(1);
	return (new_str);
}

void	copy_str(char *src, char *dest)
{
	int		i;
	int		l;

	i = 0;
	if (!src)
		return ;
	l = length_str(src);
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
}

void	n_concat_str(char *str1, char *str2, int n)
{
	int i_1;
	int i_2;

	i_1 = length_str(str1);
	i_2 = 0;
	while (str2[i_2] && i_2 < n)
		str1[i_1++] = str2[i_2++];
	str1[i_1] = 0;
}
