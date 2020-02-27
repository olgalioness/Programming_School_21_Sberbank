//
//  ft_list_merge.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

void    ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *root;
    
    root = *begin_list1;
    if (root == 0)
        *begin_list1 = begin_list2;
    else
    {
        while (root->next)
            root = root->next;
        root->next = begin_list2;
    }
}
