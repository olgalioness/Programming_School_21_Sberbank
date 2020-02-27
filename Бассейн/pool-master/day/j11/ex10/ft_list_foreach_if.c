//
//  ft_list_foreach_if.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

void    ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
                           void *data_ref, int (*cmp)())
{
    while (begin_list)
    {
        if ((*cmp)(begin_list->data, data_ref) == 0)
            (*f)(begin_list->data);
        begin_list = (*begin_list).next;
    }
}
