/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 12:49:38 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 19:41:29 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp != 0)
	{
		if ((*cmp)(tmp->data, data_ref))
			(*f)(tmp->data);
		tmp = tmp->next;
	}
}
