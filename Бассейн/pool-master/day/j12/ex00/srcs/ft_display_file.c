//
//  ft_display_file.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "display_file.h"

void    ft_display_file(char *filename)
{
    int        fd;
    char    str;
    
    fd = open(filename, O_RDONLY);
    if (fd < 0)
        return ;
    while (read(fd, &str, 1))
        write(1, &str, 1);
    close(fd);
}
