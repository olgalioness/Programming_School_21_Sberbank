/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtilda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 12:01:25 by dtilda            #+#    #+#             */
/*   Updated: 2019/02/28 21:09:50 by dtilda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_print_alphabet(char c, int a, int z)
{
	int a;
    int z;

	a = "a";
    
	while (a < z)
		{
			ft_print_alphabet(c);
			a = a + 1;
		}
	return (0);
}

int	main()
{
	ft_nputchar('@', 42);
	ft_putchar('\n');
	return (0);
}
