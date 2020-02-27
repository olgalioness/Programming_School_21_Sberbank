//
//  btree_apply_suffix.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_btree.h"

void    btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
    if (root->left)
        btree_apply_suffix(root->left, applyf);
    if (root->right)
        btree_apply_suffix(root->right, applyf);
    applyf(root->item);
}
