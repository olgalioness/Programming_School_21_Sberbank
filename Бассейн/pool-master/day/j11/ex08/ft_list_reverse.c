//
//  ft_list_reverse.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

void    ft_list_reverse(t_list **begin_list)
{
    t_list    *list;
    t_list    *i;
    t_list    *j;
    
    list = *begin_list;
    i = 0;
    j = 0;
    if (*begin_list)
    {
        while (i)
        {
            j = i;
            i = list;
            list = list->next;
            i->next = j;
        }
        *begin_list = i;
    }
}
