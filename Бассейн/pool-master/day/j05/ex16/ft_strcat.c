//
//  ft_strcat.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        ++i;
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        ++j;
    }
    dest[i + j] = '\0';
    return (dest);
}
