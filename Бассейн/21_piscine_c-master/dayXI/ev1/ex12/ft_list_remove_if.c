/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:10:13 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 11:12:48 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *iter;
	t_list *prev;

	if (!begin_iter)
		return ;
	iter = *begin_list;
	prev = NULL;
	while (iter)
	{
		if (!(cmp(iter->data, data_ref)))
		{
			if (prev)
				prev->next = iter->next;
			free(iter);
		}
		prev = iter;
		iter = iter->next;
	}
}
