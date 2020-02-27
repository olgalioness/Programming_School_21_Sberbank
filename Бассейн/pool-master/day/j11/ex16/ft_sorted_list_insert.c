//
//  ft_sorted_list_insert.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

void    ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    int        here;
    t_list    *root;
    t_list    *node;
    
    here = 0;
    node = ft_create_elem(data);
    root = *begin_list;
    if (root)
    {
        while (root->next && (cmp(root->next->data, data) <= 0))
            root = root->next;
        node->next = root->next;
        root->next = node;
    }
    else
        *begin_list = node;
}
