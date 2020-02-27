/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 23:16:13 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/25 23:50:06 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int j;

	j = 0;
	while (j < size)
	{
		if (src[j])
			dest[j] = src[j];
		else
			dest[j] = '\0';
		j++;
	}
	dest[j] = '\0';
	return (j);
}
