//
//  ft_unmatch.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdio.h>

void    swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

void    ft_sort_integer_table(int *tab, int size)
{
    int i;
    int j;
    
    i = 0;
    while (i < size)
    {
        j = i;
        while (j < size)
        {
            if (tab[i] >= tab[j])
                swap(&tab[i], &tab[j]);
            ++j;
        }
        ++i;
    }
}

int        ft_unmatch(int *tab, int length)
{
    int i;
    
    if (length == 1)
        return (tab[0]);
    ft_sort_integer_table(tab, length);
    i = 0;
    while (i < length && i + 1 < length)
    {
        if (tab[i] != tab[i + 1])
            return (tab[i]);
        i += 2;
    }
    return (tab[length - 1]);
}
