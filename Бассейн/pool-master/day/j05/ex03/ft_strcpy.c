//
//  ft_strcpy.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

char    *ft_strcpy(char *dest, char *src)
{
    int     i;
    
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
