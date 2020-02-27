/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 19:15:27 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/11 19:15:46 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *s)
{
	unsigned int i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int l;

	i = 0;
	l = 0;
	while (*(dest + l) && l <= size)
		l++;
	i = l;
	while (*(src + len - i) && (len + 1) < size)
	{
		*(dest + l) = *(src + len - i);
		l++;
	}
	if (i < size)
		*(dest + l) = '\0';
	return (i + len(src));
}
