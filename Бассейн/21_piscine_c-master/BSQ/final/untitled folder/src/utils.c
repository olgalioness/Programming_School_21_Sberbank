/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:05:54 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/20 18:41:05 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

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

void	copy_str(char *src, char *dest)
{
	int		i;
	int		l;

	if (!dest || !src)
		return ;
	i = 0;
	l = length_str(src);
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
}

void	n_concat_str(char *str1, char *str2, int n)
{
	int		i1;
	int		i2;

	i1 = length_str(str1);
	i2 = 0;
	while (str2[i2] && i2 < n)
		str1[i1++] = str2[i2++];
	str1[i1] = '\0';
}

void	reallocate_str(char **str, int size, t_realloc_mod mod)
{
	char	*clone;

	if (mod == save)
	{
		clone = (char *)malloc(sizeof(char) * size);
		copy_str(*str, clone);
	}
	free(*str);
	*str = (char *)malloc(sizeof(char) * size);
	if (mod == save)
	{
		copy_str(clone, *str);
		free(clone);
	}
}
