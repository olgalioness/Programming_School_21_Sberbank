/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:26:25 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 18:36:22 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *iter;

	iter = begin_list;
	while (iter)
	{
		if (!(cmp(iter->data, data_ref)))
			return (iter);
		iter = iter->next;
	}
	return (NULL);
}
