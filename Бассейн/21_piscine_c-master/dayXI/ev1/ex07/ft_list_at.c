/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:23:53 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 11:08:39 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*iter;
	unsigned int	counter;

	iter = begin_list;
	counter = 0;
	while (iter)
	{
		if (counter++ == nbr)
			return (iter);
		iter = iter->next;
	}
	return (NULL);
}
