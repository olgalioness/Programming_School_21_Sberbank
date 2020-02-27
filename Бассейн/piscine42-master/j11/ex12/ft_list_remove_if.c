/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 19:04:16 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/10 16:04:43 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_remove_list(t_list **tmp, t_list **tmp2)
{
	(*tmp2)->next = (*tmp)->next;
	free(*tmp);
	(*tmp) = (*tmp2)->next;
}

void	ft_remove_list_begin(t_list **tmp, void *data_ref, int (*cmp)())
{
	t_list *tmp2;
	t_list *tmp1;

	tmp1 = *tmp;
	while (tmp1 && cmp(tmp1->data, data_ref) == 0)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
	*tmp = tmp1;
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *tmp2;

	if (*begin_list)
	{
		ft_remove_list_begin(begin_list, data_ref, cmp);
		if (*begin_list)
		{
			tmp = *begin_list;
			tmp2 = tmp;
			tmp = tmp->next;
			while (tmp)
			{
				if (cmp(tmp->data, data_ref) == 0)
					ft_remove_list(&tmp, &tmp2);
				else
				{
					tmp2 = tmp;
					tmp = tmp->next;
				}
			}
		}
	}
}
