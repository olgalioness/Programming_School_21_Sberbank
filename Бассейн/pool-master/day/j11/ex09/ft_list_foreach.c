//
//  ft_list_foreach.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = (*begin_list).next;
    }
}
