/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 17:47:58 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 18:34:49 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	char buf;
	int len;

	len = ft_strlen(str) - 1;
	i = 0;
	while (i < (len / 2))
	{
		buf = str[i];
		str[i] = str[len - i];
		str[len - i] = buf;
		i++;
	}
	return (str);
}
