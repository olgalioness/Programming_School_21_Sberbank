//
//  ft_compact.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int    size_tab(char **tab)
{
    int    i;
    
    i = 0;
    while (tab[i] != 0)
        i++;
    return (i);
}

int    ft_compact(char **tab, int length)
{
    int    i;
    int    j;
    int    k;
    
    i = 0;
    length = 0;
    while (tab[i])
    {
        if (tab[i] == 0)
        {
            k = 0;
            while (tab[i + k + 1])
            {
                j = 0;
                while (tab[i + k + 1][j])
                {
                    tab[i + k][j] = tab[i + k + 1][j];
                    j++;
                }
                k++;
            }
        }
        i++;
    }
    return (size_tab(tab));
}
