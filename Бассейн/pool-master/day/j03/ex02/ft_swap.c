//
//  ft_swap.c
//  21_school
//
//  Created by Татьяна Исрапилова on 24/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

void    ft_swap(int *a, int *b)
{
    int        tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}
