//
//  main.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_cat.h"

int        main(int argc, char *argv[])
{
    if (argc == 1)
        wr_term();
    else
        ft_cat(argc - 1, argv);
    return (0);
}
