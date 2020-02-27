/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 18:12:49 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 18:46:23 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *prev;

	tmp = *begin_list;
	while ((*cmp)(data_ref, tmp->data) == 0)
	{
		*begin_list = tmp->next;
		free(tmp);
		tmp = *begin_list;
	}
	prev = *begin_list;
	while (tmp)
	{
		while (tmp && (*cmp)(data_ref, tmp->data) != 0)
			tmp = tmp->next;
		while (tmp && prev->next != tmp)
			prev = prev->next;
		if (tmp)
		{
			prev->next = tmp->next;
			free(tmp);
			tmp = prev;
		}
	}
}
