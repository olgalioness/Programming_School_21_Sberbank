//
//  ft_rev_params.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <unistd.h>

int        main(int argc, char **argv)
{
    int i;
    int j;
    
    i = argc - 1;
    while (i > 0)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        i--;
        write(1, "\n", 1);
    }
    return (0);
}
