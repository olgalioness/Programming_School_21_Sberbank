#include <stdlib.h>

#include "ft_list.h"

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

// DEV

#include <stdio.h> 

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
	print_list(t0);
	//t0 = 0;
	printf("%p\n", t0);
	printf("t0 -> %p\n\n", t0->next);
	ft_list_push_back(&t0, "beta");
	printf("t0 -> %p\n\n", t0->next);
	print_list(t0);
	ft_list_push_back(&t0, "gamma");
	printf("t0 -> %p\n\n", t0->next);
	print_list(t0);

	//int a[100];
	//for (int i = 0; i < 100; i++)
	//	a[i] = 2 * i;

	print_list(t0);
	ft_list_push_back(&t0, "delta");
	printf("t0 -> %p\n\n", t0->next);
	print_list(t0);

	for (t_list *i = t0; i != 0; i = i->next)
		printf("final list :  %p\n", i->next);
	printf("\n");
}


void	crap_a_list(t_list* list)
{	
	for (; list !=  0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

void	unit_test()
{
	t_list* list = 0;
	ft_list_push_back(&list, "asdf");
	crap_a_list(list);
	ft_list_push_back(&list, "qwer");
	ft_list_push_back(&list, "zxcv");
	crap_a_list(list);
	list = 0;
	ft_list_push_back(&list, "uiop");
	ft_list_push_back(&list, "hjkl");
	crap_a_list(list);

	/*
	expected = 	"asdf,\n
				asdf,qwer,zxcv,\n
				uiop,hjkl,\n";
	*/
}

int		main()
{
	test();
	unit_test();
}
