/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 02:53:59 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/06 21:40:09 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		k;
	char	i;

	i = '\0';
	while (*str++ != '\0')
	{
		k = 0;
		while (*str == *to_find && to_find != '\0')
		{
			k++;
			str++;
			to_find++;
			if (k > 0 && *to_find == '\0')
				return (str - k);
		}
	}
	str = &i;
	return (str);
}
