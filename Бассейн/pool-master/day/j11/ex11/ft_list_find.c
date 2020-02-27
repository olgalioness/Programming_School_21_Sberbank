//
//  ft_list_find.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

t_list    *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    while (begin_list)
    {
        if ((*cmp)(begin_list->data, data_ref) == 0)
            return (begin_list);
        begin_list = (*begin_list).next;
    }
    return (0);
}
