//
//  ft_concat_params.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdlib.h>

 char *ft_concat_params(int argc, char **argv)
{
    char    *str;
    int     i;
    int     j;
    
    str = NULL;
    if (argc >= 2)
    {
        str = malloc(sizeof(argv));
        i = 1;
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                *str++ = argv[i][j];
                j++;
            }
            *str++ = '\n';
            i++;
        }
        *str++ = '\0';
    }
    return (str);
}
