/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:03:50 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 15:21:12 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*iter;

	iter = *begin_list;
	while ((*begin_list))
	{
		iter = *begin_list;
		*begin_list = (*begin_list)->next;
		free(iter);
	}
	begin_list = NULL;
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
	ft_list_clear(&t0);
	print_list(t0);
}

void 	ft_list_clear(t_list **begin_list);

#define CE(data) ft_create_elem(data)
#define CL(list) crap_a_list(list)

void 	crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

int 	compare_ints(const int* v1, const int* v2)
{
	return *v1 - *v2;
}

void	unit_test()
{
	t_list* l = CE("asdf");
	l->next = CE("qwer");
	l->next->next = CE("zxcv");
	t_list* addresses[] = {l, l->next, l->next->next};
	qsort(addresses, 3, sizeof(t_list*), (int(*)(const void*, const void*))compare_ints);

	ft_list_clear(&l);
	// verify that this is set to a null pointer now
	printf("is null? %p\n", l);

	// verify that you freed the addresses by checking with malloc
	// if you freed them correctly, malloc will reuse them for this second batch
	l = CE("asdf");
	l->next = CE("qwer");
	l->next->next = CE("zxcv");
	t_list* addresses2[] = {l, l->next, l->next->next};
	qsort(addresses2, 3, sizeof(t_list*), (int(*)(const void*, const void*))compare_ints);
	printf("address good? %d,%d,%d\n", addresses[0] == addresses[0], addresses[1] == addresses[1], addresses[2] == addresses[2]);
}

//$expected = "is null? 0x0\naddress good? 1,1,1\n";

int		main()
{
	test();
	unit_test();
}
