//
//  ft_print_program_name.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <unistd.h>

int     main(int argc, char **argv)
{
    if (argc)
    {
        while (*argv[0])
            write(1, &*argv[0]++, 1);
    }
    write(1, "/n", 1);
    return (0);
}
