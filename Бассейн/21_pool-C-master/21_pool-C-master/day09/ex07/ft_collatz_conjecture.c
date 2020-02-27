/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 23:49:40 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/14 00:00:38 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 0)
		return (0);
	if (base & 1)
		return (1 + ft_collatz_conjecture(3 * base + 1));
	else
		return (1 + ft_collatz_conjecture(base / 2));
	return (0);
}
