/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:37:51 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/21 16:47:06 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		a;

	a = 256;
	while (a >>= 1)
	{
		if (a & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);

	}
}

int		main(void)
{
	unsigned char octet;

	octet = '2';
	print_bits(octet);
	return (0);
}
