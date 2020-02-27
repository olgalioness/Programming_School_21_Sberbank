//
//  ft_list_last.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

t_list    *ft_list_last(t_list *begin_list)
{
    t_list *list;
    
    list = begin_list;
    if (list)
    {
        while (list->next)
            list = list->next;
    }
    return (list);
}
