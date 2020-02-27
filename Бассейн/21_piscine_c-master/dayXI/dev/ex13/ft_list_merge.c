/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:42:01 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 19:02:50 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// DEV

#include <stdlib.h>
#include <stdio.h>

t_list* ft_create_elem(void* data)
{
	t_list* item = malloc(sizeof(t_list));
	item->next = NULL;
	item->data = data;
	return (item);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *iter;
	
	if (!(new = ft_create_elem(data)))
		return ;
	if (!*begin_list)
	{
		*begin_list = new;
		return ;
	}
	iter = *begin_list;
	while (iter->next)
		iter = iter->next;
	iter->next = new;	
}

void	print_list(t_list *obj)
{
	while (obj->next)
	{
		printf("(%p)[%s](%p) -> ", obj, obj->data, obj->next);	
		obj  =  obj->next;
	} 
	printf("(%p)[%s](%p)\n\n", obj, obj->data, obj->next);	
}

void	test()
{
	t_list *t0;
	t0 = ft_create_elem("alpha");
	ft_list_push_back(&t0, "beta");
	ft_list_push_back(&t0, "gamma");
	print_list(t0);
	
	t_list *t1 = ft_create_elem("one");
	ft_list_push_back(&t1, "two");
	ft_list_push_back(&t1, "three");
	print_list(t1);

	ft_list_merge(&t0, t1);
	print_list(t0);
}

int		main()
{
	test();
}

