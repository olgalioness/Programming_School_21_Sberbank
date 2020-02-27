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
	
#include <stdio.h>  // DEV 
void	print_piece(t_list *obj);


void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;
	
	if (!(new = ft_create_elem(data)))
		return ;
	if (*begin_list)
		new->next = (*begin_list); 
	*begin_list = new;
}

// DEV

#include <stdio.h>  

void	print_list(t_list *obj)
{
	while (obj)
	{
		printf("[%s](%p) -> ", obj->data, obj->next);	
		obj  =  obj->next;
	}
   printf("NULL\n");	
}

void	print_piece(t_list *obj)
{
	printf("[%s](%p)\n\n", obj->data, obj->next);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	int 	i;
	t_list *new;
	
	if (!(new = ft_create_elem(data)))
		return ;
	if (!begin_list[0])
	{
		begin_list[0] = new;
		return ;
	}
	i = 0;
	while (begin_list[0][i].next)
		i++;	
	begin_list[0][i].next = new;
}

void	test()
{
	t_list *t0 = ft_create_elem("alpha");
	ft_list_push_back(&t0, "alpha2");
	ft_list_push_front(&t0, "beta");
	print_list(t0);
	ft_list_push_front(&t0, "gamma");
	print_list(t0);
}

void	crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
			printf("%s,", (char*)list->data);
	printf("\n");
}

void	unit_test()
{
	t_list* list = 0;
	ft_list_push_front(&list, "asdf");
	crap_a_list(list);
	ft_list_push_front(&list, "qwer");
	ft_list_push_front(&list, "zxcv");
	crap_a_list(list);
	list = 0;
	ft_list_push_front(&list, "uiop");
	ft_list_push_front(&list, "hjkl");
	crap_a_list(list);
	
	/*
	 asdf,\n
	 zxcv,qwer,asdf,\n
	 hjkl,uiop,\n";
	 */
}

int		main()
{
	test();
	unit_test();
}
