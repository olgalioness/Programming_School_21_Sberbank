//
//  ft_print_numbers.c
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

void ft_print_numbers(void)
{
    char    c;
    
    c = '0';
    while (c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}
