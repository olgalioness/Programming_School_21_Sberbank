/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:28:18 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/10 13:36:05 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char 	string;
	int		count;

	i = 0;
	while (str[i] != to_find[0])
	{
		i++;
	}
	while (to_find[count] != '\0')
	{
		count++;
	}
	while (str[i] != str[count])
	{
		string = str[i];
		i++;
	}
	return (*(string));
}
