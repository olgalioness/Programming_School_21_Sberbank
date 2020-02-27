//
//  btree_insert_data.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_btree.h"

void    btree_insert_data(t_btree **root, void *item,
                          int (*cmpf)(void *, void *))
{
    if (!*root)
        *root = btree_create_node(item);
    else if (cmpf((*root)->item, item) > 0)
        btree_insert_data(&((*root)->left), item, cmpf);
    else
        btree_insert_data(&((*root)->right), item, cmpf);
}
