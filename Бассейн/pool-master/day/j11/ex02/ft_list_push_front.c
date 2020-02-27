//
//  ft_list_push_front.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdlib.h>
#include "ft_list.h"

t_list    *ft_create_elem(void *data)
{
    t_list *list;
    
    list = malloc(sizeof(t_list));
    list->data = data;
    list->next = NULL;
    return (list);
}

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list    *list;
    
    list = ft_create_elem(data);
    list->next = *begin_list;
    *begin_list = list;
}
