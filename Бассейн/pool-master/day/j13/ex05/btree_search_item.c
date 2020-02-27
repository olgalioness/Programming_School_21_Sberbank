//
//  btree_search_item.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_btree.h"

void    *btree_search_item(t_btree *root, void *data_ref,
                           int (*cmpf)(void *, void *))
{
    void    *result;
    
    result = NULL;
    if (root->left)
        result = btree_search_item(root->left, data_ref, cmpf);
    if (!result && cmpf(root->item, data_ref) == 0)
        return (root->item);
    if (!result && root->right)
        result = btree_search_item(root->right, data_ref, cmpf);
    return (result);
}
