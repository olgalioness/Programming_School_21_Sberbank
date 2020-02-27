//
//  ft_strncat.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

char    *ft_strncat(char *dest, char *src, int nb)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        ++i;
    while (src[j] != '\0' && j < nb)
    {
        dest[i + j] = src[j];
        ++j;
    }
    dest[i + j] = '\0';
    return (dest);
}
