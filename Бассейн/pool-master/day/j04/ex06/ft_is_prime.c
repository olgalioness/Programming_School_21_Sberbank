//
//  ft_is_prime.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int    ft_is_prime(int nb)
{
    int i;
    
    if (nb <= 1)
        return (0);
    i = 2;
    while (i * i < nb && i < 46341)
    {
        if (nb % i == 0)
            return (0);
        ++i;
    }
    return (1);
}
