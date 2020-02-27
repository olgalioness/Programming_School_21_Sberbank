/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 20:51:55 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/06 11:07:56 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int ptr;

	ptr = 0;
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 'a' + 'A';
	str++;
	ptr++;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			if (*(str - 1) >= 0 && *(str - 1) <= 32)
				*str = *str - 'a' + 'A';
		str++;
		ptr++;
	}
	return (str - ptr);
}
