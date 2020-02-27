/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 04:27:42 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/07 21:22:47 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	c;
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (*(str + count) != '\0')
		count++;
	while (i < count / 2)
	{
		c = *(str + i);
		*(str + i) = *(str + count - i - 1);
		*(str + count - i - 1) = c;
		i++;
	}
	return (str);
}
