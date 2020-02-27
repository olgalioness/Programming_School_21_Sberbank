//
//  ft_range.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int     i;
    int     *nbr;
    int     tmp;
    
    i = 0;
    tmp = min;
    if (min >= max)
        return (0);
    while (tmp <= max)
    {
        tmp++;
        i++;
    }
    nbr = (int*)malloc(sizeof(int) * i);
    i = 0;
    while (min <= max)
    {
        nbr[i] = min;
        min++;
        i++;
    }
    return (nbr);
}
