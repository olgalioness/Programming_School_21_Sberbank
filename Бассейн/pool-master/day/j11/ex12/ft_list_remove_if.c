//
//  ft_list_remove_if.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *root;
    t_list *node;
    t_list *next;
    
    root = *begin_list;
    node = *begin_list;
    while (root)
    {
        next = (*root).next;
        if ((cmp)(root->data, data_ref) == 0)
        {
            if (root == *begin_list)
            {
                *begin_list = next;
            }
            node->next = next;
            free(root);
        }
        node = root;
        root = next;
    }
}
