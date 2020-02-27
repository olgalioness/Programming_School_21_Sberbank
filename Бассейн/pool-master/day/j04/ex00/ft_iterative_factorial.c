//
//  ft_iterative_factorial.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int    ft_iterative_factorial(int nb)
{
    int count;
    
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
        count = nb - 1;
        while (count < nb && count != 0)
        {
            nb = nb * count;
            count--;
        }
        return (nb);
    }
}
