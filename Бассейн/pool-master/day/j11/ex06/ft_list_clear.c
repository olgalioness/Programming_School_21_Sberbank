//
//  ft_list_clear.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdlib.h>
#include "ft_list.h"

void    ft_list_clear(t_list **begin_list)
{
    t_list    *list;
    
    while (*begin_list)
    {
        list = *begin_list;
        *begin_list = list->next;
        free(list);
    }
}
