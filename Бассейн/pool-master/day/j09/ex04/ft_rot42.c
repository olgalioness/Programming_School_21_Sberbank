//
//  ft_rot42.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

char    *ft_rot42(char *str)
{
    int     i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'J') ||
            (str[i] >= 'a' && str[i] <= 'j'))
            str[i] += 16;
        if ((str[i] >= 'K' && str[i] <= 'Z') ||
            (str[i] >='k' && str[i] <= 'z'))
            str[i] -= 10;
        i++;
    }
    str[i] = '\0';
    return (str);
}
