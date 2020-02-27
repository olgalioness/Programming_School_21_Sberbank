/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 19:21:25 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/11 19:34:41 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (*(src + count) != '\0')
		++count;
	i = 0;
	while (*(src + i) && i < size - 1)
	{
		*(dest + i) = *(src + 1);
		++i;
	}
	*(dest + i) = '\0';
	return (count);
}
