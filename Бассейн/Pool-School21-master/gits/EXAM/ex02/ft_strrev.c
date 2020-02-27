/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 18:51:10 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/21 19:27:09 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0; 
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	buff;
	int		i;
	int		j;
	int		size;

	i = 0;
	size = ft_strlen(str);
	j = size - 1;
	while (i < (size + 1) / 2)
	{
		buff = str[i];
		str[i] = str[j];
		str[j] = buff;
		i++;
		j--;	
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char *ans;

	ans = "\n";
	if (argc == 2)
		ans = ft_strrev(argv[1]);
	printf("%s", ans);
	return (0);
}
