//
//  ft_advanced_sort_wordtab.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

void    ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
    int        i;
    int        j;
    char    *temp;
    
    i = 0;
    while (tab[i] != 0)
    {
        j = i + 1;
        while (tab[j] != 0)
        {
            if ((*cmp)(tab[i], tab[j]) > 0)
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            ++j;
        }
        ++i;
    }
}
