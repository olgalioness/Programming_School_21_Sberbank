//
//  ft_foreach.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

void    ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;
    
    i = 0;
    while (i < length)
    {
        (*f)(tab[i]);
        i++;
    }
}
