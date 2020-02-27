/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:14:20 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/02 16:20:57 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		*ft_range(int min, int max)
{
	int	*ret;
	int i;

	if (min >= max)
	{
		return ((void*)0);
	}
	ret = (int*)malloc(sizeof(int) * (max - min));
	if (!ret)
	{
		return ((void*)0);
	}
	i = 0;
	while (i < max - min)
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}
