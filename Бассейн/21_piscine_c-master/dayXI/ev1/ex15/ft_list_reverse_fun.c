/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:36:35 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 11:17:43 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	print_list(t_list *obj);

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*cur;
	t_list	*next;
	t_list	*prev;
	t_list	*second;
	t_list	tmp;

	if (!begin_list || !(begin_list->next))
		return ;
	cur = begin_list;
	next = NULL;
	prev = NULL;
	second = begin_list->next;
	while (cur)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	second->next = prev;
	tmp = *begin_list;
	*begin_list = *prev;
	*prev = tmp;
}
