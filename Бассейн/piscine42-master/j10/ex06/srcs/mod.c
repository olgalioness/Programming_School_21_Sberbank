/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:21:29 by smrabet           #+#    #+#             */
/*   Updated: 2015/11/06 17:21:31 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

void	mod(int vi, int vj)
{
	ft_putnbr(vi % vj);
	ft_putchar('\n');
}
