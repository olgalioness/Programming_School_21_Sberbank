/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 15:20:21 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/04 16:03:16 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	body(char *str, int *i, int *flag)
{
	if (str[*i] >= '0' && str[*i] <= '9')
	{
		if (*flag == 1)
			*flag = 0;
	}
	else if (str[*i] >= 'a' && str[*i] <= 'z')
	{
		if (*flag == 1)
		{
			str[*i] -= 32;
			*flag = 0;
		}
	}
	else if (str[*i] >= 'A' && str[*i] <= 'Z')
	{
		if (*flag == 0)
			str[*i] += 32;
		else
			*flag = 0;
	}
	else
		*flag = 1;
	*i = *i + 1;
}

char	*ft_strcapitalize(char *str)
{
	int flag;
	int i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
		body(str, &i, &flag);
	return (str);
}
