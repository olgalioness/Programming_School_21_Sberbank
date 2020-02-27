/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:27:55 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/06 19:47:52 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int ans_size;

	ans_size = 1;
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
