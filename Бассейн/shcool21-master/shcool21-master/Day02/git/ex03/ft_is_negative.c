/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:26:12 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/20 17:49:35 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char c;

	if (n >= 0)
	{
		c = 'P';
	}
	else
	{
		c = 'N';
	}
	ft_putchar(c);
	ft_putchar('\n');
}
