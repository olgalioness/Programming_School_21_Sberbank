/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:09:10 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/21 20:28:54 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*buff;

	buff = dest;
	while (*src && n > 0)
	{
		n--;
		*dest = *src;
		dest++;
		src++;
	}
	while (n > 0 && *dest)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest);
}
