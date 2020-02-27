/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 16:51:07 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/05 19:19:32 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i1;
	int i2;
	int temp;

	i1 = 0;
	if (to_find == 0)
		return (str);
	while (str[i1] != '\0')
	{
		i2 = 0;
		temp = i1;
		while (str[i1] == to_find[i2])
		{
			i1++;
			i2++;
		}
		if (to_find[i2] == '\0')
			return (str + temp);
		i1 = temp;
		i1++;
	}
	return (NULL);
}
