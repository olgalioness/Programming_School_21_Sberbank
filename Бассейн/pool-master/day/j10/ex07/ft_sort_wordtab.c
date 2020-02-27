//
//  ft_sort_wordtab.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int        ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        ++i;
    return (s1[i] - s2[i]);
}

void    ft_sort_wordtab(char **tab)
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
            if (ft_strcmp(tab[i], tab[j]) > 0)
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
