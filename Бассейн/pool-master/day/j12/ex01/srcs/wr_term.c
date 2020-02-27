//
//  wr_term.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_cat.h"

void    wr_term(void)
{
    char    c;
    
    while (read(STDIN_FILENO, &c, 1) > 0)
        write(1, &c, 1);
}
