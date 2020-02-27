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
#include "ft_is_negative.c"
#include "ft_putchar.c"

void	ft_is_negative(int n);
void    ft_putchar(char c);

int	main(void)
{
	ft_is_negative(-164);
	return 0;
}
