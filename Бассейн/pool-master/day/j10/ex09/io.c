//
//  io.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
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
    }
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * (-1));
    }
    else
    {
        if (nb >= 10)
            ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
}

int        ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        ++i;
    return (s1[i] - s2[i]);
}

int        ft_atoi(char *str)
{
    int value;
    int sign;
    
    value = 0;
    sign = 1;
    while (*str == '\n' || *str == ' ' || *str == '\t' || *str == '\r' ||
           *str == '\v' || *str == '\f')
    {
        ++str;
    }
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = 0;
        str++;
    }
    while ((*str) >= '0' && (*str) <= '9')
    {
        value *= 10;
        value = (sign ? value + (*str - '0') : value - (*str - '0'));
        str++;
    }
    return (value);
}
