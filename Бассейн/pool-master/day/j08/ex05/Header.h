//
//  Header.h
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>

char            **ft_split_whitespaces(char *str);
void            ft_show_tab(struct s_stock_par *par);

typedef struct  s_stock_par
{
    int         size_param;
    char        *str;
    char        *copy;
    char        **tab;
}               t_stock_par;

#endif
