/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 21:19:55 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/01 21:30:26 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int		main(void)
{
	char str[] = "Hello world!";
	char *ptr;
	int i;

	ptr = str;
	i = ft_strlen(ptr);
	printf("%d", i);
	return (0);
}
