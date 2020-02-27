//
//  ft_recursive_power.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int    ft_recursive_power(int nb, int power)
{
    if (power < 0)
    {
        return (0);
    }
    else if (power == 0)
    {
        return (1);
    }
    else
    {
        return (nb * ft_recursive_power(nb, power - 1));
    }
}
