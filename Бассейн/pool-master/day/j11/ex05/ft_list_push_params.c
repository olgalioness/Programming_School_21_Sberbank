//
//  ft_list_push_params.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdlib.h>
#include "ft_list.h"

t_list    *ft_create_elem(void *data)
{
    t_list    *list;
    
    list = malloc(sizeof(t_list));
    list->data = data;
    list->next = NULL;
    return (list);
}

t_list    *ft_list_push_params(int ac, char **av)
{
    int        i;
    t_list    *list;
    t_list    *tmp;
    
    i = 1;
    list = ft_create_elem(av[0]);
    while (i < ac)
    {
        tmp = list;
        list = ft_create_elem(av[i]);
        list->next = tmp;
        i++;
    }
    return (list);
}
