//
//  ft_map.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int     *ft_map(int *tab, int length, int(*f)(int))
{
    int     i;
    int     *arr;
    
    i = 0;
    tmp = (int*)malloc(sizeof(int) * length);
    while (i < length)
    {
        arr[i] = (*f)(tab[i])
        i++;
    }
    return (arr);
}

