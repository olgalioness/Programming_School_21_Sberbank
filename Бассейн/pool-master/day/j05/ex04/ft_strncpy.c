//
//  ft_strncpy.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

char    *ft_strncpy(char *dest, char *src, unsigned int n) {
    int     i;
    int     j;
    
    i = 0;
    j = n;
    while (i < j) {
        dest[i] = src[i];
        if (src[i] == '\0')
            dest[i] = '\0';
        i++;
    }
    return (dest);
}
