//
//  ft_putnbr.c
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

void    ft_putnbr(int nb)
{
    if (nb < 10 && nb >= 0)
    {
        ft_putchar(nb + '0');
    }
    else if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
        if (nb < 0)
            ft_putchar('-');
    }
    else
    {
        ft_putchar('-');
        ft_putnbr(nb * -1);
    }
}
