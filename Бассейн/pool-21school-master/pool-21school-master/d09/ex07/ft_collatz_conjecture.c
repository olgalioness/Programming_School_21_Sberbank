/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:55:16 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/09 02:37:46 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base > 1)
	{
		if (base % 2 == 0)
			base = base / 2;
		else if (base % 2 == 1)
			base = 3 * base + 1;
	}
	else
		return (0);
	return (ft_collatz_conjecture(base) + 1);
}
