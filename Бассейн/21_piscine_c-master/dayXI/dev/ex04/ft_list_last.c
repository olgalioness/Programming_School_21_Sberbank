/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:32:04 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 13:57:34 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *iter;

	iter = begin_list;
	while (iter && iter->next)
		iter = iter->next;
	return (iter);
}

// DEV

#include <stdlib.h>

#include <stdio.h> 

t_list	*ft_create_elem(void *data)
{
    t_list *new;
    
    if (!(new = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    
    new->data = data;
    new->next = NULL;
    
    return (new);
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
	t0 = 0;
	
	printf("last = %p\n", ft_list_last(t0));

	t0 = ft_create_elem("alpha");
	ft_list_push_back(&t0, "beta");
	ft_list_push_back(&t0, "gamma");
	ft_list_push_back(&t0, "delta");
	print_list(t0);
	
	printf("last = %p\n", ft_list_last(t0));
}

#define CE(data) ft_create_elem(data)
#define CL(list) crap_a_list(list)

void 	crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

void	unit_test()
{
	t_list* list = 0;
	printf("%p\n", ft_list_last(list));
	list = CE("asdf");
	printf("%s\n", (char*)(ft_list_last(list)->data));
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	printf("%s\n", (char*)(ft_list_last(list)->data));
	list = CE("asdf");
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	list->next->next->next = CE("uiop");
	printf("%s\n", (char*)(ft_list_last(list)->data));
	list->next->next->next->next = CE("hjkl");
	printf("%s\n", (char*)(ft_list_last(list)->data));
}

//$expected = "0x0\n asdf\n zxcv\n uiop\n hjkl\n";

int		main()
{
	test();
	unit_test();
}
