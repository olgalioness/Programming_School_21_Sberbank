//
//  btree_level_count.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_btree.h"

int    btree_level_count(t_btree *root)
{
    int left;
    int right;
    
    left = 0;
    right = 0;
    if (root)
    {
        left = btree_level_count(root->left);
        right = btree_level_count(root->right);
        return (left > right ? left + 1 : right + 1);
    }
    else
        return (0);
}
