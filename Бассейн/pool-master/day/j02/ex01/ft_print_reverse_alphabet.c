//
//  ft_print_reverse_alphabet.c
//  21_school
//
//  Created by Татьяна Исрапилова on 24/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char    c;
    
    c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c);
        c--;
    }
}
