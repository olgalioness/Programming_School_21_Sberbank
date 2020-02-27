//
//  ft_max.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

 int ft_max(int *tab, int length)
{
    int     i;
    int     max;
    
    i = 0;
    max = tab[i];
    while (i < length)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}
