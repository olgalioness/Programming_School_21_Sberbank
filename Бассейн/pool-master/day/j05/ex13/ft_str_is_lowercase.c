//
//  ft_str_is_lowercase.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int    ft_str_is_lowercase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
        ++i;
    }
    return (1);
}
