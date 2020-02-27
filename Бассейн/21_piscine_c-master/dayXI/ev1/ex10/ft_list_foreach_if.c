/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:54:26 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 11:11:06 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list,
		void (*f)(void *), void *data_ref,
		int (*cmp)(void *, void *))
{
	t_list	*iter;

	iter = begin_list;
	while (iter)
	{
		if (!cmp(iter->data, data_ref))
			f(iter->data);
		iter = iter->next;
	}
}
