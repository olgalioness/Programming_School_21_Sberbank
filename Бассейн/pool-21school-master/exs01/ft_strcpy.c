/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 03:21:23 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/20 03:44:35 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_puts(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

int		ft_strlen(cahr *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (ft_strlen(src) == ft_strlen(dst))
		dst[i] = '\0';
	return (dst);
}

int main(int argc, char **argv)
{
	char c[] = "ABCDEFG";
	char e[6];
	char *f;

	f = stpcpy(e, c);
	ft_puts(f);
	return (0);
}
