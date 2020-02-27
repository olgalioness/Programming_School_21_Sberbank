//
//  ft_param_to_tab.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_stock_par.h"

int                    ft_strlen(char *c)
{
    int i;
    
    i = 0;
    while (c[i] != '\0')
        ++i;
    return (i);
}

char                *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}

char                *ft_strdup(char *src)
{
    char *dest;
    
    dest = malloc((ft_strlen(src) + 1) * sizeof(char));
    return (dest ? ft_strcpy(dest, src) : dest);
}

struct    s_stock_par    *ft_param_to_tab(int ac, char **av)
{
    t_stock_par    *tab;
    int            i;
    int            j;
    
    tab = (s_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
    if (tab)
        return (NULL);
    while (i < argc)
    {
        j = 0;
        while (av[i][j] != '\0')
            ++j;
        tab[i].size_param = j;
        tab[i].str = av[i];
        tab[i].copy = ft_strdup(av[i]);
        tab[i].tab = ft_split_whitespaces(av[i]);
        ++i;
    }
    tab[i].str = NULL;
    return (tab);
}
