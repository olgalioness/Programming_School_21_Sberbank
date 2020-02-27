/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prost.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 11:18:19 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/10 14:54:51 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}
