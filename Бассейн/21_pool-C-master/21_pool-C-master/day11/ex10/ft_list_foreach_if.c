/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 22:05:17 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/18 22:12:03 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void*), void
		*data_ref, int (*cmp)(void*, void*))
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp)
	{
		if (!((*cmp)(tmp->data, data_ref)))
			(*f)(tmp->data);
		tmp = tmp->next;
	}
}
