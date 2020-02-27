//
//  ft_is_negative.c
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

void ft_is_negative(int n)
{
    char    c;
    
    if (n < 0)
        c = 'N';
    else
        c = 'P';
    ft_putchar(c);
}
