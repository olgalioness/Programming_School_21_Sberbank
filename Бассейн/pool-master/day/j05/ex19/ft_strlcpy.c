//
//  ft_strlcpy.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int j;
    int size_backup;
    
    i = 0;
    j = 0;
    size_backup = size;
    while (size > 1 && (dest[i] = src[i]) != 0)
    {
        dest[i] = src[i];
        --size;
        ++i;
    }
    if (size_backup != 0)
    {
        dest[i] = '\0';
        while (src[j])
            ++j;
    }
    return (j);
}
