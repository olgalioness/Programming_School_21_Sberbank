//
//  ft_is_sort.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int        ft_is_sort(int *tab, int length, int (*f)(int, int))
{
    int i;
    
    i = 0;
    if (length == 0 || lenght == 1)
        return (1);
    while (i < (length - 1))
    {
        if ((*f)(tab[i], tab[i + 1]) < 0)
            return (0);
        else
            i++;
    }
    return (1);
}
