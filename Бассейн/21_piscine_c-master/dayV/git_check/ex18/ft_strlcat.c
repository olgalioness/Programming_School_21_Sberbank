/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 21:55:36 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/05 11:47:30 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0')
		k++;
	if (i > size)
		k += size;
	else
		k += i;
	while (src[j] != '\0' && i + j < size - 1 && size != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (k);
}
