//
//  ft_destroy.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdlib.h>
#include "ft_ultimator.h"

void    ft_destroy(char ***factory)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (factory)
    {
        while (factory[i])
        {
            while (factory[i][j])
            {
                free(factory[i][j]);
                ++j;
            }
            free(factory[i]);
            ++i;
        }
        free(factory);
        ++factory;
    }
}
