//
//  ft_strrev.c
//  21_school
//
//  Created by Татьяна Исрапилова on 24/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

char    *ft_strrev(char *str)
{
    int        i;
    int        size;
    char    temp;
    
    i = 0;
    size = 0;
    if (str)
    {
        while (str[size] != '\0')
        {
            size++;
        }
        while (i < size / 2)
        {
            temp = str[i];
            str[i] = str[size - i - 1];
            str[size - i - 1] = temp;
            ++i;
        }
    }
    return (str);
}
