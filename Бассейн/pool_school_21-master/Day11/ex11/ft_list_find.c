/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:52:50 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 18:04:04 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_rev, int (*cmp)())
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp)
	{
		if ((*cmp)(data_rev, tmp->data) == 0)
			return (tmp);
		tmp = tmp->next;
	}
}
