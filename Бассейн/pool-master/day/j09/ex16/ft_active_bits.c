//
//  ft_active_bits.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

unsigned int    ft_active_bits(int value)
{
    unsigned int n;
    
    n = 0;
    while (value)
    {
        n += n & 1;
        n >>= 1;
    }
    return (n);
}
