/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:53:38 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/06 18:16:50 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int fl;

	fl = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (fl && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			fl = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			fl = 0;
		else if (!fl && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		else if (str[i] < 'a' || str[i] > 'z')
			fl = 1;
		i++;
	}
	return (str);
}
