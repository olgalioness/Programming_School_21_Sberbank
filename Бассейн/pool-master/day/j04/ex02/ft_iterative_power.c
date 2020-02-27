//
//  ft_iterative_power.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int    ft_iterative_power(int nb, int power)
{
    int rez;
    
    rez = 1;
    if (power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        return (1);
    }
    while (power > 0)
    {
        rez = rez * nb;
        power--;
    }
    return (rez);
}
