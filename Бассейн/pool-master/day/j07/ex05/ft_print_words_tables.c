//
//  ft_print_words_tables.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    if (str)
    {
        while (*str != '\0')
        {
            ft_putchar(*str);
            ++str;
        }
        ft_putchar('\n');
    }
}

void    ft_print_words_tables(char **tab)
{
    int i;
    
    i = 0;
    if (tab)
    {
        while (tab[i] != 0)
            ft_putstr(tab[i++]);
    }
}
