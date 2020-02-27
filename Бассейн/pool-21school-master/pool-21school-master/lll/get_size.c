/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:29:46 by kcharla           #+#    #+#             */
/*   Updated: 2019/08/20 16:42:22 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		get_iterations(int side_min, int side_max, int size)
{
	return ((side_max + 1 - size) * (side_min + 1 - size));
}
