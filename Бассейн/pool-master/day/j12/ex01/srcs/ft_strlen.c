//
//  ft_strlen.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_cat.h"

int        ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while (*str++ != '\0')
        len++;
    return (len);
}
