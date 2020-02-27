/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:23:53 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 15:38:29 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*iter;
	unsigned int counter;

	iter = begin_list;
	counter = 0;
	while (iter)
	{
		if (counter++ == nbr)
			return (iter);
		iter = iter->next;
	}
	return (NULL);
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
	while (obj)
	{
		//printf("(%p)", obj);
		printf("[%s](%p) -> ", obj->data, obj->next);	
		obj  =  obj->next;
	}
   printf("NULL\n");	
}

void	test()
{
	t_list *t0;
	t0 = ft_create_elem("alpha");
	ft_list_push_back(&t0, "beta");
	ft_list_push_back(&t0, "gamma");
	ft_list_push_back(&t0, "delta");
	print_list(t0);
	
	int i = 0;
	for (t_list *iter = t0; iter; iter = iter->next, i++)
	{
		t_list *temp = ft_list_at(t0, i);
		printf("no. %d : [%s](%p)\n", i, temp->data, temp->next);
	}
}

#define CE(data) ft_create_elem(data)
#define CL(list) crap_a_list(list)

void	crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

void	unit_test()
{
	t_list* list = 0;
	printf("%p\n", ft_list_at(list, 0));
	printf("%p\n", ft_list_at(list, 1));
	printf("%p\n", ft_list_at(list, 100));
	list = CE("asdf");
	printf("%s\n", (char*)(ft_list_at(list, 0)->data));
	printf("%p\n", ft_list_at(list, 1));
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	list->next->next->next = CE("uiop");
	list->next->next->next->next = CE("hjkl");
	printf("%s\n", (char*)(ft_list_at(list, 0)->data));
	printf("%s\n", (char*)(ft_list_at(list, 1)->data));
	printf("%s\n", (char*)(ft_list_at(list, 2)->data));
	printf("%s\n", (char*)(ft_list_at(list, 3)->data));
	printf("%s\n", (char*)(ft_list_at(list, 4)->data));
	printf("%p\n", ft_list_at(list, 5));
	printf("%p\n", ft_list_at(list, 100));
}

/*
$expected = "0x0\n
			0x0\n
			0x0\n
			asdf\n
			0x0\n
			asdf\n
			qwer\n
			zxcv\n
			uiop\n
			hjkl\n
			0x0\n
			0x0\n";
*/

int		main()
{
	test();
	unit_test();
}
