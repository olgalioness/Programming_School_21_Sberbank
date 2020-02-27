/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:51:40 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/06 23:31:05 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *ptr;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			ptr = str;
			while (*to_find != '\0' && *str == *to_find)
			{
				to_find++;
				str++;
			}
			if (*to_find == '\0')
				return (ptr);
			else
			{
				str = ptr;
				to_find = &to_find[0];
			}
		}
		str++;
	}
	return (0);
}
