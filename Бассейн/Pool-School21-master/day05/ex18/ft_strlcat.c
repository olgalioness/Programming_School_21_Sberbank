/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:38:19 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/06 19:47:10 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int ans_size;

	ans_size = 0;
	while (*dest != '\0')
	{
		dest++;
		size--;
		ans_size++;
	}
	while (*src != '\0')
	{
		if (size == 0)
		{
			dest -= ans_size;
			return (ans_size);
		}
		*dest = *src;
		src++;
		dest++;
		ans_size++;
		size--;
	}
	dest[ans_size] = '\0';
	return (ans_size);
}
