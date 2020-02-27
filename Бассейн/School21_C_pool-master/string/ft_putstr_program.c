/* ************************************************************************** */
/*                                                                            */
/*                      nt     main(void)
 *                       24 {
 *                        25     char str[] = "Hello world!";
 *                         26     char *ptr;
 *                          27
 *                           28     ptr = str;
 *                            29     ft_putstr(ptr);
 *                             30     return (0);
 *                              31 }                                  :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 19:49:55 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/01 20:39:48 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int		main(void)
{
	char str[] = "Hello world!";
	char *ptr;

	ptr = str;
	ft_putstr(ptr);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
