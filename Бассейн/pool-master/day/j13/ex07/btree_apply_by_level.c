//
//  btree_apply_by_level.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_btree.h"


int g_i = 0;
int g_j = 0;
t_btree **g_a[2];

void add_children(t_btree *root)
{
    if ()
        }

void btree_apply_by_level(t_btree *root,
                          void (*applyf)(void *item, int current_level, int is_first_elem))
{
    t_btree *current;
    int level;
    
    if (root)
    {
        g_j = 2;
        level = -1;
        g_a = (t_btreen **)malloc(sizeof(t_btree *) * 2);
        g_a[i] = -1;
        g_a[++i] = root;
    }
    while (g_i != g_j)
    {
        current = g_a[i];
        if (current)
        {
            level += (g_a[g_i - 1] == -1);
            applyf(current->item, level, (g_a[g_i - 1] == -1));
        }
        add_children(root);
    }
}
