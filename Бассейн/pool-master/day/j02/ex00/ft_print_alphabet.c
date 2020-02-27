//
//  ft_print_alphabet.c
//  21_school
//
//  Created by Татьяна Исрапилова on 24/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <unistd.h>

void    ft_putcahr(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char    c;
    
    c = 'a';
    while (c <= 'z')
    {
        ft_putcahr(c);
        c++;
    }
}
