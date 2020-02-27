//
//  ft_sort_integer_table.c
//  21_school
//
//  Created by Татьяна Исрапилова on 24/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

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
