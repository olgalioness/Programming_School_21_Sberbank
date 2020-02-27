//
//  rush00.c
//  21_school
//
//  Created by Татьяна Исрапилова on 24/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdio.h>

int        ft_putchar(char c);


void    ft_print(int x, int y, int count_x, int count_y)
{
    if (count_x == 1 && count_y == 1)
        ft_putchar('/');
    else if (count_x == x && count_y == y && y != 1 && x != 1)
        ft_putchar('/');
    else if (count_x == x && count_y == 1)
        ft_putchar('\\');
    else if (count_x == 1 && count_y == y)
        ft_putchar('\\');
    else if ((count_x > 1 && count_x < x) && (count_y == 1 || count_y == y))
        ft_putchar('*');
    else if ((count_x == 1 || count_x == x) && (count_y > 1 && count_y < y))
        ft_putchar('*');
    else
        ft_putchar(' ');
}

void    rush(int x, int y)
{
    int count_x;
    int count_y;
    
    if (x <= 0 || y <= 0)
        return ;
    count_y = 1;
    while (count_y <= y)
    {
        count_x = 1;
        while (count_x <= x)
        {
            ft_print(x, y, count_x, count_y);
            count_x++;
        }
        count_y++;
        ft_putchar('\n');
    }
}
