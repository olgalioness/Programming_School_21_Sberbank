/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 11:36:08 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/05 20:44:26 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*k;

	i = 0;
	k = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str - 'A' + 'a';
		str++;
	}
	str = k;
	if (*str >= 'a' && *str <= 'z')
		*str = *str + 'A' - 'a';
	str++;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z' && !(*(str - 1) >= 'A' && *(str - 1) <=
			'Z') && !(*(str - 1) >= 'a' && *(str - 1) <= 'z') && !(*(str - 1)
			>= '0' && *(str - 1) <= '9'))
			*str = *str + 'A' - 'a';
		str++;
		i++;
	}
	return (str - i - 1);
}
