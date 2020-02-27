//
//  ft_print_comb.c
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

void    ft_num(char c1, char c2, char c3)
{
    ft_putchar(c1);
    ft_putchar(c2);
    ft_putchar(c3);
    if (c1 != '7' || c2 != '8' || c3 != '9')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_print_comb(void)
{
    char s1;
    char s2;
    char s3;
    
    s1 = '0';
    while (s1 <= '9')
    {
        s2 = s1 + 1;
        while (s2 <= '9')
        {
            s3 = s2 + 1;
            while (s3 <= '9')
            {
                ft_num(s1, s2, s3);
                ++s3;
            }
            ++s2;
        }
        ++s1;
    }
}
