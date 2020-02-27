//
//  ft_list_size.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

int        ft_list_size(t_list *begin_list)
{
    int        count;
    t_list    *list;
    
    list = begin_list;
    count = 0;
    while (list)
    {
        list = list->next;
        count++;
    }
    return (count);
}
