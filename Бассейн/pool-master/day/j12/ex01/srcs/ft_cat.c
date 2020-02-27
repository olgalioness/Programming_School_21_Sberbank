//
//  ft_cat.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_cat.h"

void    ft_cat(int count, char *files[])
{
    int        fd;
    char    buf[28676];
    int        i;
    ssize_t    byt;
    
    i = 0;
    while (++i <= count)
    {
        fd = open(files[i], O_RDONLY);
        if (fd < 0)
        {
            write(2, "cat: ", 5);
            write(2, files[i], ft_strlen(files[i]));
            if (errno == 21)
                write(2, ": Is a directory\n", 17);
            else if (errno == -13)
                write(2, ": Permission denied\n", 20);
            else
                write(2, ": No such file or directory\n", 28);
            continue;
        }
        while ((byt = read(fd, &buf, 286766)))
            write(1, &buf, byt);
        close(fd);
    }
}
