/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:32:04 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 13:41:50 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list *iter;
	int i;

	iter = begin_list;
	i = 0;
	while (iter)
	{
		i++;
		iter = iter->next;
	}
	return (i);
}

// DEV

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
	t0 = ft_create_elem("alpha");
	ft_list_push_back(&t0, "beta");
	ft_list_push_back(&t0, "gamma");
	ft_list_push_back(&t0, "delta");
	print_list(t0);
	
	printf("size = %d\n", ft_list_size(t0));
}

#define CE(data) ft_create_elem(data)

void	crap_a_list(t_list* list)
{
		for (; list != 0; list = list->next)
					printf("%s,", (char*)list->data);
			printf("\n");
}

void 	unit_test()
{
	t_list* list = 0;
	printf("%d\n", ft_list_size(list));
	list = CE("asdf");
	printf("%d\n", ft_list_size(list));
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	printf("%d\n", ft_list_size(list));
	list = CE("asdf");
	list->next = CE("asdf");
	list->next->next = CE("asdf");
	list->next->next->next = CE("asdf");
	printf("%d\n", ft_list_size(list));
	list->next->next->next->next = CE("asdf");
	printf("%d\n", ft_list_size(list));

	//$expected = "0\n1\n3\n4\n5\n";

}

int		main()
{
	test();
	unit_test();
}
