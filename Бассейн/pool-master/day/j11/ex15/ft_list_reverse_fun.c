//
//  ft_list_reverse_fun.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_list.h"

int        ft_list_size2(t_list *begin_list)
{
    int        size;
    t_list    *i;
    
    size = 0;
    i = begin_list;
    while (i)
    {
        ++size;
        i = (*i).next;
    }
    return (size);
}

t_list    *ft_list_at2(t_list *begin_list, unsigned int nbr)
{
    while (nbr-- > 0 && begin_list)
        begin_list = (*begin_list).next;
    if (begin_list)
        return (begin_list);
    else
        return (0);
}

void    swap(t_list *a, t_list *b)
{
    void    *p;
    
    p = a->data;
    a->data = b->data;
    b->data = p;
}

void    ft_list_reverse_fun(t_list *begin_list)
{
    int i;
    int size;
    
    i = 0;
    size = ft_list_size2(begin_list);
    while (i < size / 2)
    {
        swap(ft_list_at2(begin_list, i), ft_list_at2(begin_list, size - i - 1));
        ++i;
    }
}
