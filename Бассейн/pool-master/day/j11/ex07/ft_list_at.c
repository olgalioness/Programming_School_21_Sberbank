//
//  ft_list_at.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

t_list    *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list    *list;
    
    list = begin_list;
    while (nbr > 1)
    {
        if (!list)
            return (0);
        list = list->next;
        nbr--;
    }
    return (list);
}
