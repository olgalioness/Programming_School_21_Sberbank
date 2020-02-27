/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 23:03:31 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/25 23:42:16 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int jj;

	i = 0;
	j = 0;
	jj = 0;
	while (dest[i])
		i++;
	jj = i;
	while (i < size)
	{
		if (src[j])
			dest[i + j] = src[j];
		else
			dest[i + j] = '\0';
		j++;
	}
	dest[i] = '\0';
	return (i + j + 1);
}
