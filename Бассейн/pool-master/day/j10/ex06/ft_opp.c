//
//  ft_opp.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_opp.h"

void    ft_add(int a, int b)
{
    ft_putnbr(a + b);
}

void    ft_sub(int a, int b)
{
    ft_putnbr(a - b);
}

void    ft_mul(int a, int b)
{
    ft_putnbr(a * b);
}

void    ft_div(int a, int b)
{
    if (b != 0)
        ft_putnbr(a / b);
    else
        ft_putstr("Stop : division by zero");
}

void    ft_mod(int a, int b)
{
    if (b != 0)
        ft_putnbr(a % b);
    else
        ft_putstr("Stop : modulo by zero");
}
