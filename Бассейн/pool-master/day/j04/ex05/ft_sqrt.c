//
//  ft_sqrt.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int    ft_sqrt(int nb)
{
    int i;
    
    i = 1;
    if (nb > 0)
    {
        while (i * i <= nb)
        {
            if (i * i == nb)
                return (i);
            else if (i >= 46341)
                return (0);
            ++i;
        }
    }
    return (0);
}
