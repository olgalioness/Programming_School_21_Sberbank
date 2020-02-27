/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:38:01 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/09 12:47:47 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		count_len(int argc, char **argv)
{
	int i;
	int j;
	int len;

	len = 0;
	i = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	i++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	unsigned int	len;
	char			*array;
	int				i;

	len = count_len(argc, argv);
	array = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (i < argc)
	{
		array = ft_strcat(array, *argv);
		argv++;
		i++;
	}
	return (array);
}

int main (int argc, char **argv)
{
	char *c;
	c = ft_concat_params(argc, argv);
	printf("%s\n", c);
	return(0);
}
