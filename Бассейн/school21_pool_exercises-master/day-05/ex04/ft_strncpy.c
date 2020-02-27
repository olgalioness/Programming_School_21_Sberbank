/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:06:52 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/10 15:06:53 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *dst;

	dst = dest;
	while (n)
	{
		if (!(*src))
			break ;
		*(dst++) = *(src++);
		n--;
	}
	while (n--)
		*(dst++) = 0;
	return (dest);
}
