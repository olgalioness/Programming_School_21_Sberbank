//
//  ft_cat.h
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#ifndef FT_CAT_H
#define FT_CAT_H

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/uio.h>

int     ft_strlen(char *str);
void    wr_term(void);
void    ft_cat(int count, char *files[]);

#endif
