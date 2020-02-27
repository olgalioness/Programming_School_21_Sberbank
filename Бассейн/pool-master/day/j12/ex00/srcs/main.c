//
//  main.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "display_file.h"


int        main(int argc, char **argv)
{
    if (argc == 1)
        write(2, "File name missing.\n", 19);
    else if (argc > 2)
        write(2, "Too many arguments.\n", 20);
    else
        ft_display_file(argv[1]);
    return (0);
}
