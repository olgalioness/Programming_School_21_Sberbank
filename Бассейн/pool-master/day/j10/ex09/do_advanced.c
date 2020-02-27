//
//  do_advanced.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "opp2.h"
#include "ft_opp.h"

void    (*parse(char *op))(int, int)
{
    int i;
    
    i = 0;
    while (g_opptab[i].s[0] != '\0')
    {
        if (ft_strcmp(g_opptab[i].s, op) == 0)
            return (g_opptab[i].f);
        ++i;
    }
    return (g_opptab[i].f);
}

void    ft_usage(int a, int b)
{
    int n;
    int i;
    
    n = a + b;
    i = 0;
    ft_putstr("error : only [ ");
    while (g_opptab[i].s[0] != '\0')
    {
        ft_putstr(g_opptab[i].s);
        ft_putchar(' ');
        ++i;
    }
    ft_putstr("] are accepted.");
}

int        main(int argc, char *argv[])
{
    int        a;
    int        b;
    void    (*fun)(int, int);
    
    if (argc == 4)
    {
        a = ft_atoi(argv[1]);
        fun = parse(argv[2]);
        b = ft_atoi(argv[3]);
        if (fun)
            fun(a, b);
        else
            ft_putnbr(0);
        ft_putchar('\n');
    }
    return (0);
}
