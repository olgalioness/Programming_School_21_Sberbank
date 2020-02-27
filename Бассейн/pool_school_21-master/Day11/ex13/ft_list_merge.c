/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 19:35:02 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 19:39:53 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *tmp;

	if (*begin_list1 == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	tmp = *begin_list1;
	while (tmp->next != 0)
		tmp = tmp->next;
	tmp->next = begin_list2;
}
