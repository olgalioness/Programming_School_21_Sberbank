//
//  ft_recursive_factorial.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdio.h>

int    ft_recursive_factorial(int nb)
{
    if (nb > 12 || nb < 0)
    {
        return (0);
    }
    else if (nb == 0)
    {
        return (1);
    }
    else
    {
        return (ft_recursive_factorial(nb - 1) * nb);
    }
}
