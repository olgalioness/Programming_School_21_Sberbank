/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprogramm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:47:17 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/20 15:54:39 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_reverse_alphabet.c"
#include "ft_putchar.c"

void	ft_print_reverse_alphabet(void);
void    ft_putchar(char c);

int	main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
