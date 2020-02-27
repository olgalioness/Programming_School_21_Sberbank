/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 14:01:08 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/07 14:07:00 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>

int		main(void)
{
	t_point point;

	set_point(&point);
    printf("%d, %d", point.x, point.y);	
	return (0);
}
