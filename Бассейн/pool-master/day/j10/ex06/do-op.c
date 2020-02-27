//
//  do-op.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_opp.h"

void    (*parse(char *op))(int, int)
{
    if (!ft_strcmp(op, "+"))
        return (&ft_add);
    else if (!ft_strcmp(op, "-"))
        return (&ft_sub);
    else if (!ft_strcmp(op, "*"))
        return (&ft_mul);
    else if (!ft_strcmp(op, "/"))
        return (&ft_div);
    else if (!ft_strcmp(op, "%"))
        return (&ft_mod);
    else
        return (0);
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
