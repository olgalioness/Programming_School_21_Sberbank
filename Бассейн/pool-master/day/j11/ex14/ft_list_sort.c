//
//  ft_list_sort.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

void    ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list    *i;
    t_list    *j;
    void    *temp_data;
    
    i = *begin_list;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if ((*cmp)(i->data, j->data) > 0)
            {
                temp_data = i->data;
                i->data = j->data;
                j->data = temp_data;
            }
            j = j->next;
        }
        i = i->next;
    }
}
