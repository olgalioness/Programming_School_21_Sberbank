//
//  ft_collatz_conjecture.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

unsigned int    ft_collatz_conjecture(unsigned int base)
{
    if (base == 1)
        return (1);
    else if (base % 2)
        return (1 + ft_collatz_conjecture(3 * base + 1));
    else
        return (1 + ft_collatz_conjecture(base / 2));
}
