/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:12:30 by rfork             #+#    #+#             */
/*   Updated: 2019/08/06 18:19:23 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;
	int n;

	i = 0;
	k = 0;
	n = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + n] != '\0' && to_find[n] != '\0' && k != 1)
			if (to_find[n] == str[i + n])
				n++;
			else
			{
				k = 1;
				n = 0;
			}
		if (to_find[n] == '\0' && n != 0)
			return (str + i);
		i++;
	}
	return (0);
}
