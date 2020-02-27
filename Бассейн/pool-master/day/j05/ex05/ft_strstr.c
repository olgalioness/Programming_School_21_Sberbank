//
//  ft_strstr.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

char    *ft_strstr(char *str, char *to_find)
{
    int     a;
    int     b;
    int     length;
    
    length = 0;
    while (to_find[length] != '\0')
        length++;
    if (length == 0)
        return (str);
    a = 0;
    b = 0;
    while (str[a] != '\0')
    {
        if (str[a] == to_find[b])
            b++;
        else
            b = 0;
        if (b == length)
            return (str + a - 1);
        a++;
    }
    return (0);
}
