/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:34:06 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/13 21:42:25 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *iter;

	if (!begin_list1)
		return ;
	iter = *begin_list1;
	while (iter->next)
		iter = iter->next;
	iter->next = begin_list2;
}

int		ft_list_size(t_list *begin_list)
{
	t_list	*iter;
	int		i;

	iter = begin_list;
	i = 0;
	while (iter)
	{
		i++;
		iter = iter->next;
	}
	return (i);
}

void	set_params(int *i, t_list **prev, t_list **cur, t_list **begin_list)
{
	*i = 1;
	*prev = 0;
	*cur = *begin_list;
}

void	swap(t_list **prev, t_list *cur, t_list *next, t_list **begin_list)
{
	if (*prev)
		(*prev)->next = next;
	cur->next = next->next;
	next->next = cur;
	*prev = next;
	if (*begin_list == cur)
		*begin_list = next;
}

void	ft_sorted_list_merge
	(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list	*prev;
	t_list	*cur;
	t_list	*next;
	int		i;
	int		size;

	ft_list_merge(begin_list1, begin_list2);
	size = ft_list_size(*begin_list1);
	while (size > 1)
	{
		set_params(&i, &prev, &cur, begin_list1);
		while (cur && i++ < size)
		{
			next = cur->next;
			if (cmp(cur->data, next->data) > 0)
				swap(&prev, cur, next, begin_list1);
			else
			{
				prev = cur;
				cur = next;
			}
		}
		size--;
	}
}
