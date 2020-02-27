//
//  ft_strdup.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *src2;
    int i;
    
    i = 0;
    while (src[i] != '\0')
        i++;
    src2 = (char*)malloc(sizeof(*src) * (i + 1));
    i = 0;
    while (src[i] != '\0')
    {
        src2[i] = src[i];
        i++;
    }
    free(src2);
    return (src2);
}
