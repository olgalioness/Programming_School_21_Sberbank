/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:08:23 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/02 17:20:03 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
	{
		ft_putchar(fd, *str);
		str++;
	}
}
