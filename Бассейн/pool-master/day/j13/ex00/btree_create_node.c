//
//  btree_create_node.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_btree.h"

t_btree    *btree_create_node(void *item)
{
    t_btree *tree;
    
    tree = (t_btree *)malloc(sizeof(t_btree));
    if (tree)
    {
        tree->item = item;
        tree->left = 0;
        tree->right = 0;
    }
    return (tree);
}
