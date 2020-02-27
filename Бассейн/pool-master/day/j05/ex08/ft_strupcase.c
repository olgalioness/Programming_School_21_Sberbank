//
//  ft_strupcase.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

char    *ft_strupcase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 9 && str[i] <= 13)
            i++;
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}
