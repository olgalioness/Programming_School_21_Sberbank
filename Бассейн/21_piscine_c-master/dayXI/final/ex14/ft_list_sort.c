/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 19:21:09 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/13 12:05:27 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

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

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*prev;
	t_list	*cur;
	t_list	*next;
	int		i;
	int		size;

	size = ft_list_size(*begin_list);
	while (size > 1)
	{
		set_params(&i, &prev, &cur, begin_list);
		while (cur && i < size)
		{
			next = cur->next;
			if (cmp(cur->data, next->data) > 0)
				swap(&prev, cur, next, begin_list);
			else
			{
				prev = cur;
				cur = next;
			}
			i++;
		}
		size--;
	}
}
