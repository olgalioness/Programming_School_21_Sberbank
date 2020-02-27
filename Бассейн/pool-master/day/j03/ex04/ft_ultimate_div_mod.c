//
//  ft_ultimate_div_mod.c
//  21_school
//
//  Created by Татьяна Исрапилова on 24/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     div;
    int     mod;
    
    if (*b != 0)
    {
        div = (*a) / (*b);
        mod = (*a) % (*b);
        *a = div;
        *b = mod;
    }
}
