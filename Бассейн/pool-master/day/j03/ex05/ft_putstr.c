//
//  ft_putstr.c
//  21_school
//
//  Created by Татьяна Исрапилова on 24/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <unistd.h>

void ft_putstr(char *str)
{
    int     i;
    
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
